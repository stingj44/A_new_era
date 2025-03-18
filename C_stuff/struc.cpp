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
	char name[40] = {};
	char artist[40] = {};
	int year = 0;
	Record album;

	//Album name
	cout << "Enter the album name: ";
	cin.getline(name, 40);
	strcpy(album.name, name);
	
	//Artist name
	cout << endl << "Enter the artist name: ";
	cin.getline(artist, 40);
	strcpy(album.artist, artist);

	//Release year
	cout << endl << "Enter the album release year: ";
	cin >> album.release_yr;

	//Display results (to be rmd)
	cout << endl << "Album: " << album.name;
	cout << endl << "Artist: " << album.artist;
	cout << endl << "Released: " << album.release_yr << endl;

	return 0;
}

//Main program
int main() {
	add_record();
	return 0;
}
