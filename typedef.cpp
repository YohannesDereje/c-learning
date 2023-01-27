#include <iostream>
using namespace std;
#include <vector>

// typedef is used to represent data types with the names i want to
// though its being replaced by using keyword.

 typedef string wvv_t;
int main() {
	wvv_t name = "yohannes";
	cout << name ;
	// lets see using
	using number_t = int;
	number_t x = 5;
	cout<< x;
	return 0;
}
