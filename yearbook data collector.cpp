
#include <fstream>
#include <iostream>


using namespace std;

void addUser(){
    string fname;
    string lname;
    string nickname;
    string age;
    string cgpa;
    string sex;
    string department;
    string memorable;
    string funniest;
    string wordtop;
    string rolemodels;
    string favquote;
    string lastwords;

    cout <<"Enter First Name: ";
    cin >> fname;

    cout <<"Enter Last Name: ";
    cin >> lname;

    cout<<"Enter your nickname:";
    cin>> nickname;

    cout << "Enter Your Sex: ";
    cin >> sex;

    cout <<"Enter Age: ";
    cin >> age;


    cout << "Enter Department: ";

    cin.ignore();
    getline(cin, department, '\n');

    cout << "Enter CGPA: ";
    cin >> cgpa;

    cout << "memorable moments in JIT:";
    cin.ignore();
    getline(cin, memorable, '\n');

    cout << "funniest moments in JIT:";
    cin.ignore();
    getline(cin, funniest, '\n');

    cout << "Words to parents";
    cin.ignore();
    getline(cin, wordtop, '\n');

    cout << "role models:";
    cin.ignore();
    getline(cin, rolemodels, '\n');

    cout << "favourite quote:";
    cin.ignore();
    getline(cin, favquote, '\n');

    cout << "Last words:";
    cin.ignore();
    getline(cin, lastwords, '\n');

    ofstream MyFile((fname+".txt").c_str());

    MyFile << "First Name: "<<fname <<endl;
    MyFile << "Last Name: "<< lname <<endl;
    MyFile << "Sex: "<< sex <<endl;

    MyFile << "Age: "<< age <<endl;
    MyFile << "Department: " << department <<endl;
    MyFile << "CGPA: " << cgpa <<endl;
    MyFile << "memorable moments in JIT: " << memorable <<endl;
    MyFile << "funniest moments in JIT: " << funniest <<endl;
    MyFile << "words to parents or guardians: " << wordtop <<endl;
    MyFile << "role models: "<< rolemodels << endl;
    MyFile << "favourite quote: " << favquote <<endl;
    MyFile << "last words: " << lastwords <<endl;

    MyFile.close();

    cout<< "Graduate Added\n";

}

void search(){
    string username;
    cout << "Enter a graduate's name to search by: ";
    cin >> username;
    cout << endl;
    ifstream MyReadFile(username +".txt");
    string myText;
    int n = 0;
    while (getline (MyReadFile, myText)) {
        cout << myText << endl;
        n++;
    }
    if (n == 0){
        cout << "No graduate Found by " << username << endl;
        MyReadFile.close();

    }
    MyReadFile.close();
}

int main(){
    int sel;
    bool cont = true;

    while (cont){
        cout<< "*******************************" <<endl;
        cout << "Enter based on your choice" <<endl;
        cout << "[1] Add graduate\n";
        cout << "[2] Search graduate\n";
        cout << "[0] Exit\n";
        cout << "*******************************"<< endl;
        cout <<"\nInput: ";
        cin >> sel ;
        cout << "\n";
        switch(sel){
            case 0:
                cont = false;
                break;
            case 1:
                addUser();
                break;
            case 2:
                search();
                break;
            default:
                cout << "Invalid Input\n";
                break;
        }
    }

    return 0;
}

