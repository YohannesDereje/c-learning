#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void showbalance(double balance);
double deposit(double balance);
double withdraw(double balance);
int main()
{

    double balance = 0;
    int choice;

    do
    {
        cout << "*************BANKING PROGRAM *****************\n";
        cout << "*************************************************";
        cout << "Enter you choice : \n";
        cout << "***********************************************";
        cout << "1. show balance\n";
        cout << "2. deposit money\n";
        cout << "3. withdraw money from balance\n";
        cout << "4. exit\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);
        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance=deposit(balance); // here wrong way
            showBalance(balance); // for this function spelling erroor
            break;
        case 3:
            balance=withdraw(balance); //impossible what you had here
            showbalance(balance);
            break;
        case 4:
            cout << "thanks for visiting\n";
            break;
        default:
            cout << "invalid choice\n";
        }
       }// here one curl
     } while (choice != 4);

        return 0;
    }
    void showbalance(double balance)
    {
        cout << "your balance is : $" <<
         setprecision(2) << fixed << balance << endl;
    }
    double deposit( double balance)
    {
        double amount = 0;
        cout << "enter amount to the deposited: ";
        cin >> amount;

        if (amount > 0) // here amout
        {
        return amount + balance; // return sum;
        }
        else
        {
            cout << "thats not a valid amount\n";
            return balance;
        }
    }
    double withdraw(double balance)
    {
        double amount = 0;
        cout << "enter amount to be withdrawn:";
        cin >> amount;

        if (amount > balance)
        {
            cout << "insufficient funds\n";
            return;
        }
        else if (amount < 0)
        {
            cout << "thats not a valid amount\n";
        }
        else 
        return balance-amount;
    }
