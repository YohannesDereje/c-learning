#include <iostream>
using namespace std;

int main() {
	/* some useful strings to know include:-
	append()
	length()
	empty()
	clear()
	insert()
	at()
	find()
	erase() */
	
	string name;
	cout << " enter your full name\n";
	getline (cin, name);
	name.append(" deacon");
	cout << name; 
	
	
	return 0;
}
