#include <iostream>
using namespace std;
// something
int main() {
	
	//double x= (int) 3.14;
	//cout<< x;
	
	//char x = 100;
	//cout << (char) 100;
	//cout << x;
	
	/* lets use casting in calculating average*/
	int x = 2;
	int y = 4;
	double percentage;
    percentage = x/ (double)y * 100;
	cout << percentage << "%"; // produces an error message because we are deviding by an integer and integer data type cant hold decimals
	
	
	
	return 0;
}
