#include <iostream>
using namespace std;

//Get users name Function
int get_name() {
	char fname[25] = {};
	char lname[25] = {};

	//Get first name
	cout << endl;
	cout << "Please enter your first name: ";
	cin >> fname;
	cin.ignore(100,'\n');

	//Get last name
	cout << "Please enter your last name: ";
	cin >> lname;
	cin.ignore(100,'\n');

	cout << "Your name is: " << fname << " " << lname << endl;
	return 0;
}

int for_loops(){
	return 0;
}
//Main Function
int main() {
	get_name();
	return 0;
}
