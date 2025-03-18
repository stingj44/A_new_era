#include <iostream>
#include <cstring>
using namespace std;

//Record struct
struct Record {
	char name[40];		//Album name
	char artist[40];	//Artist name
	int release_yr;		//Release year
};

//Add a new record function
int add_record() {
	char name[40];
	Record album;

	cout << "Enter an album name: ";
	cin.getline(name,40);
	strcpy(album.name, name);

	cout << endl << album.name;

	return 0;
}

//Main program
int main() {
	add_record();
	return 0;
}
