// Include header file
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
node *start = NULL;
void insert(int val)
{
    node *newnode = new node();

    newnode->data = val;
    if (start == NULL)
    {
        newnode->next = newnode->prev = newnode;
        start = newnode;
    }
    else
    {
        node *lst = start->prev;
        lst->next = newnode;
        newnode->prev = lst;
        newnode->next = start;
        start->prev = newnode;
        lst = newnode;
    }
}
void insertAtBeginning(int val)
{
    node *newnode = new node();
    newnode->data = val;
    if (start == NULL)
    {
        newnode->next = newnode->prev = newnode;
        start = newnode;
    }
    else
    {
        node *lst = start->prev;
        lst->next = newnode;
        newnode->prev = lst;
        newnode->next = start;
        start->prev = newnode;
        start = newnode;
    }
}
void insertAt(int val, int loc)
{
    node *newnode = new node();
    newnode->data = val;
    int n = 1;
    node *temp = start;
    while (temp->next != start)
    {
        if ((n - 1) == loc)
        {
            newnode->next = temp->next;
            newnode->prev = temp->next->prev;
            temp->next = newnode;
            temp->next->prev = newnode;

            break;
        }
        else
        {
            temp = temp->next;
            n++;
        }
    }
}
void deleteFormBeginning()
{
    node *sknd = start->next;
    node *temp;
    if (start == NULL)
    {
        cout << "you have no any data here: ";
    }
    else
    {
        // sknd->next = start->next->next;
        sknd->prev = start->prev;
        start->prev->next = sknd;
        temp = start;
        start = sknd;
        delete temp;
    }
}
void deleteFromEnd()
{
    node *lst = start->prev;
    node *skndLast = lst->prev;
    node *temp;
    if (start == NULL)
    {
        cout << "you have no any data here: ";
    }
    else
    {
        skndLast->next = start;
        start->prev = skndLast;
        temp = lst;
        lst = skndLast;
        delete temp;
    }
}
void deleteFrom(int loc)
{
    node *temp = start;
    int n = 1;
    node *dlt = temp->next;
    while (temp->next != start)
    {
        if (n == loc)
        {

            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;

            break;
        }
        else
        {
            temp = temp->next;
            n++;
        }
    }
}
void display()
{
    node *temp = start;
    while (temp->next != start)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(int argc, char **argv)
{
    insert(10);
    insert(20);
    insert(20);
    insert(20);
    insert(30);
    insertAtBeginning(19);
    insertAtBeginning(16);
    insertAt(14, 4);
    display();
    deleteFormBeginning();
    deleteFromEnd();
    //  deleteFrom(3);
    cout << "\n after deletion \n";
    display();
    return 0;
}
