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

        /*
	cout << endl << "Album: " << collection[count].name;
	cout << endl << "Artist: " << collection[count].artist;
	cout << endl << "Released: " << collection[count].release_yr;
	cout << endl << "Count: " << count << endl;
	*/

	return 0;
}


//Main program
int main() {
	int count = 0;
	int menu_choice = 0;
	int quit = false;
	Record collection[ARRSIZE] = {};
	
	while (!quit) {
		cout << endl << "Enter a menu choice: ";
		cin >> menu_choice;
		cin.ignore();

		if (menu_choice == 1)
			add_record(collection, count);
	}
	return 0;
}
