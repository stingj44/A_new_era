#include <iostream>
#include <cstring>
using namespace std;

const int ARRSIZE = 5;

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
	int count = 0;
	int index = 0;
	Record collection[ARRSIZE] = {};
	Record album;

	//Album name
	cout << "Enter the album name: ";
	cin.getline(name, 40);
	strcpy(album.name, name);
	
	//Artist name
	cout << "Enter the artist name: ";
	cin.getline(artist, 40);
	strcpy(album.artist, artist);

	//Release year
	cout << "Enter the album release year: ";
	cin >> album.release_yr;
	++count;

	if (count < ARRSIZE)
	       	collection[count] = album;
	
	//Display results (to be rmd)
	cout << endl << "Album: " << collection[count].name;
	cout << endl << "Artist: " << collection[count].artist;
	cout << endl << "Released: " << collection[count].release_yr;
	cout << endl << "Count: " << count << endl;

	return 0;
}

//Main program
int main() {
	add_record();
	return 0;
}
