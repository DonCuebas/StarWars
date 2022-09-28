// Your Name: Don-Omar Cuebas
// Date: 9/16/22
// Program Title: Star Wars
// Program Description: This program displays the episodes, names, and release dates of the Star Wars movie series.

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream> // header file for ifstream and ofstream

using namespace std;

int main()
{
	// declare variables
	string name1, name2, name3, name4, name5, name6, name7, name8, name9;
	int date1, date2, date3, date4, date5, date6, date7, date8, date9;

	// declare file stream variables
	ifstream inData;
	ofstream outData;

	//Open the input output files
	inData.open("StarWarsMovieList.txt");
	outData.open("StarWarsOutputFile.txt");

	// Code for data manipulation
	getline(inData, name1);
	inData >> date1;
	inData.ignore();

	getline(inData, name2);
	inData >> date2;
	inData.ignore();

	getline(inData, name3);
	inData >> date3;
	inData.ignore();

	getline(inData, name4);
	inData >> date4;
	inData.ignore();

	getline(inData, name5);
	inData >> date5;
	inData.ignore();

	getline(inData, name6);
	inData >> date6;
	inData.ignore();

	getline(inData, name7);
	inData >> date7;
	inData.ignore();

	getline(inData, name8);
	inData >> date8;
	inData.ignore();

	getline(inData, name9);
	inData >> date9;
	inData.ignore();

	// Output to the file
	outData << setw(19) << left << "Episode" << setw(33) << left << "Movie Name" << "Release Year" << endl;
	outData << setw(64) << setfill('-') << " " << endl;
	outData << setfill(' ') << setw(19) << left << "I" << setw(33) << left << name1 << date1 << endl;
	outData << setw(19) << left << "II" << setw(33) << left << name2 << date2 << endl;
	outData << setw(19) << left << "III" << setw(33) << left << name3 << date3 << endl;
	outData << setw(19) << left << "IV" << setw(33) << left << name4 << date4 << endl;
	outData << setw(19) << left << "V" << setw(33) << left << name5 << date5 << endl;
	outData << setw(19) << left << "VI" << setw(33) << left << name6 << date6 << endl;
	outData << setw(19) << left << "VII" << setw(33) << left << name7 << date7 << endl;
	outData << setw(19) << left << "VIII" << setw(33) << left << name8 << date8 << endl;
	outData << setw(19) << left << "IX" << setw(33) << left << name9 << date9 << endl;

	// Output to the screen

	cout << "Processing data..." << endl;
	cout << "\nPlease check the 'StarWarsOutputFile.txt' file." << endl;

	// Closing the files
	inData.close();
	outData.close();

	return 0;
}