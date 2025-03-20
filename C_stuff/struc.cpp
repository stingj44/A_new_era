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

//Add a new record
int add_record(Record collection[], int &count) {
        char name[40] = {};
        char artist[40] = {};
        Record album;

        //Album name
        cout << endl << "Enter the album name: ";
        cin.getline(name, 40);
        strcpy(album.name, name);

        //Artist name
        cout << "Enter the artist name: ";
        cin.getline(artist, 40);
        strcpy(album.artist, artist);

        //Release year
        cout << "Enter the album release year: ";
        cin >> album.release_yr;

        //Check if the collection is full before adding
        if (count < ARRSIZE) {
                collection[count] = album;
                ++count;
        }

	return 0;
}

//Display the entire collection
int displayall(Record collection[]) {
	for (int i = 0; i < ARRSIZE; ++i) {
		cout << endl << "Album: " << collection[i].name;
		cout << endl << "Artist: " << collection[i].artist;
		cout << endl << "Released: " << collection[i].release_yr << endl;
	}

	return 0;
}
//Main program
int main() {
	int count = 0;
	int menu_choice = 0;
	int quit = false;
	Record collection[ARRSIZE] = {};
	
	//Main program loop
	while (!quit) {
		cout << endl << "Enter a menu choice: ";
		cin >> menu_choice;
		cin.ignore();

		if (menu_choice == 1)
			add_record(collection, count);
		else if (menu_choice == 2)
			displayall(collection);
		else if (menu_choice == 4) {
			cout << endl << "Quitting the program. Goodbye." << endl;
			quit = true;
		}
	}
	return 0;
}
