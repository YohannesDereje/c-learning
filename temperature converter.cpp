#include <iostream>
using namespace std;


int main() {
	
	double temp;
	char unit;
	
	cout << "******* temperature conversion***********\n";
	cout << " F= farenheit\n";
	cout << "C= celsius\n";
	cout << "what unit would you like to convert to?\n";
	cin >> unit;
	
	if(unit == 'F' || unit == 'f'){
		cout << "enter the temperature in celsius\n";
		cin >> temp;
		temp = (1.8 * temp) + 32;
		cout << "temperature is: "<< temp << "farenheit\n";
    }
	else if (unit == 'C' || unit == 'c'){
		cout << "enter the temperature in farenheit\n";
		cin >> temp;
		temp = (temp-32) / 1.8;
		cout << "temperature is: "<< temp << " " "farenheit\n";
	}
	else {
		cout << "please enter in a 'C' or 'F'\n";
		
	}
	
	
	
	
	
	return 0;
}
