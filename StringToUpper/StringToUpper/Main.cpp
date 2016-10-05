#include <iostream>
#include <string>
#include "stringFunctions.h"
using namespace std;

/*
Write a function called stringToUpper that accepts
a string a returns the string converted 
to all upper case.
*/


int main()
{
	string sName;
	cout << "Please enter a name: ";
	getline(cin, sName);
	
	sName = stringToUpper(sName);
	cout << sName << endl;
	
	sName = stringToLower(sName);
	cout << sName << endl;

	return 0;
}



