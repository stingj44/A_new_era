#include <iostream>
#include <unistd.h>
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

//Random for loop function
int find_value() {
	int numbers[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int guess = 0;

	cout << "Guess a number between 1-10: ";
	cin >> guess;

	for (int i = 0; i < size; ++i) {
		cout << numbers[i] << endl;
		sleep(1);

		if (numbers[i] == guess) {
			cout << endl << "Found!" << endl;
			return 0;
		}
	}
	cout << endl << "Not found" << endl;
	return 1;
}

//Main Function
int main() {
	//get_name();
	find_value();
	return 0;
}
