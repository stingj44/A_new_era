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

//For loop count down function
int countdown() {
	int numbers[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	
	//Loop through and count down
	for (int i = size - 1; i >= 0; --i) {
		sleep(1);
		cout << numbers[i] << endl;
	}

	cout << endl << "BLAST OFF!" << endl;
	return 0;
}

//While loop find value function
int value_find() {
	int numbers[] = {1,10,20,50,86,31,5,100,65,72};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int i = 0;
	int guess = 0;
	bool found = false;

	//Take in the users guess
	cout << "Guess any number between 1-100: ";
	cin >> guess;

	//Loop through the array and look for a match
	while (i < size && found == false) {
		cout << numbers[i] << endl;
		if (numbers[i] == guess) {
			cout << endl << "Found." << endl;
			found = true;
		}
		++i;
	}

	//If not found condition
	if (!found)
		cout << endl << "Not found." << endl;

	return 0;
}

//Main Function
int main() {
	//get_name();
	countdown();	
	//value_find();
	return 0;
}
