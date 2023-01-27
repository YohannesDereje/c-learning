#include <iostream>
using namespace std;


int main() {
	
	char op;
	double num1;
	double num2;
	double result;
	
	cout<< "************calculator*************" << endl;
	
	cout << "enter either (+,-,/,*)" << endl;
	cin>> op;
	cout<< "enter first number =" << endl;
	cin>> num1;
	cout << "enter second number =" << endl;
	cin >> num2;
	
	switch(op){
		case '+':
			result = num1 + num2;
			cout<< "your result is :-"<< result<< endl;
			break;
		case '-':
			result = num1 - num2;
			cout<< "your result is :-"<< result<< endl;;
			break;
		case '*':
			result = num1 * num2;
			cout<< "your result is :-"<< result<< endl;
			break;
		case '/':
			result = num1 / num2;
			cout<< "your result is :-"<< result<< endl;
			break;
		default:
			cout<< "that wasnt a valid operator!"<< endl;
		return 0;
		
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
