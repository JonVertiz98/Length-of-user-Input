// Jonathan Vertiz
// ITSE 1307
// Length of user input
// LengthInput.cpp : Program that calculates the length of a users string.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//add the value of the string and activate it
	string strSentence = "-";

	//ask the user what to input
	cout << "Enter your string: ";
	getline(cin, strSentence);

	//returns the phrase and its word count
	cout << strSentence << endl;
	cout << "Word length: " << strSentence.length() << endl;
    return 0;
}

