//#############################################################
//#    SEHH2042 Group Project                                 #
//#    Library Management System                              #
//#                                                           #
//#                                                           #
//#############################################################
#include <iostream>
#include <fstream>	// for file input/output
#include <string>
using namespace std;

int extractFields(string line, char fields[][101]) {
	/*
	*	Suggested algorithm:
	*	1. Use loop to check every char of string
	*	2. Handle when it is " or ,
	*	3. Copy the content char into 2D array fields
	*	4. Count the number of fields
	*/
	int numFields = 0;

	// **********
	// Implement your code to extract fields from the line
	// **********
	cout << line << endl;	// *** show the line content, for you to know what it reads
	// *** you should remove this line in your code

	return numFields;
}

void readCSV(string filename) {
	fstream inFile;				// for handling file
	string line;				// for storing 1 line in a file
	char fields[10][101] = {};	// for storing extracted fields (assume max. 10 fields per line, each field has max. 100 char)
	int numFields;				// for storing number of fields per line
	int countRecords = 0;		// for counting the number of records in csv file

	inFile.open(filename);
	if (!inFile.is_open()) {
		cout << "Cannot open file \"" << filename << "\"\n";
		return;
	}

	while (getline(inFile, line, '\n')) {				// read line by line until end of file
		numFields = extractFields(line, fields);		// call function to extract fields from the line

		for (int i = 0; i < numFields; i++)				// *** display the fields of this line
			cout << i << ": " << fields[i] << endl;		// *** you should modify this code for fields processing
		cout << "\n\n";									// *** e.g. assign fields to data members of an object

		countRecords++;
	}

	cout << countRecords << " Record(s) imported.\n";
	inFile.close();
}

//





//

void managebook()
{
	cout << "*** Manage Books ***" << endl;
	cout << "[1] Display books" << endl;
	cout << "[2] Search book" << endl;
	cout << "[3] Add book" << endl;
	cout << "[4] Remove book" << endl;
	cout << "[5] Back" << endl;
	cout << "********************" << endl;
	cout << "Option (1 - 5): "; cin >> option;

	switch (option) {
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':return;
}
void manageborrowers()
{


}
void borrowbooks()
{


}
void returnbooks()
{


}
void useful()
{


}
void memberlist()
{


}

int main() {
	char booklistchoice, borrowerlistchoice;
	int option;
	string filename;

	cout << "Import book list from file? [Y/N]: "; cin >> booklistchoice;
	while (booklistchoice != 'Y' && booklistchoice != 'N') {
		cout << "Please enter Y or N.\n";
		cout << "Import book list from file? [Y/N]: "; cin >> booklistchoice;
	}

	do {
		cout << "*** Library Management System ***" << endl;
		cout << "[1] Manage books" << endl;
		cout << "[2] Manage borrowers" << endl;
		cout << "[3] Borrow book(s)" << endl;
		cout << "[4] Return book(s)" << endl;
		cout << "[5] Useful feature(s) added" << endl;
		cout << "[6] Member List" << endl;
		cout << "[7] Exit" << endl;
		cout << "*********************************" << endl;
		cout << "Option (1 - 7): "; cin >> option;

		switch (option) {
		case '1': 
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		}

	} while (option != 7);
	return 0;
}