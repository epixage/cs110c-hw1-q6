// cs110c-hw1-q6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	const int letters = 26;
	int counter = 0, index = 0;
	bool alpha[letters] = { 0 };
	string x = "";
	cout << "Enter a string to check" << endl;
	getline(cin, x);
	for (int i = 0; i < x.length(); i++)
	{
		//cout << "loop1" << endl;
		if (x[i] == ' ')
		{
			continue;
		}
		if ('A' <= x[i] && x[i] <= 'Z')
		{

		}
		else if ('a' <= x[i] && x[i] <= 'z')
		{

		}

	}
	if (counter == 26)
	{
		cout << "This string is a panagram and it contains all 26 characters of the alphabet." << endl;
	}
	else
	{
		cout << "This string contains these letters of the alphabet: " << endl;
		for (int i = 0; i < letters; i++)
		{
			if (alpha[i] == true)
			{
				cout << 'A' + i;
			}
		}
		cout << endl;
	}
}
