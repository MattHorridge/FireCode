#include <string>
#include <iostream>
using namespace std;

/*
A palindrome is a string or sequence of characters that reads the same backward as forward. 
For example, "MADAM" is a palindrome.

Write a function that takes in an input string: 
str and returns true if the input string is a palindrome, false otherwise.
An empty string is considered a palindrome. 

You also need to account for the space character - i.e. "race car" 
should return false as read backward it is "rac ecar".

*/

//Takes string and checks if its a palindrome
class Firelvl1Palindrome {
public:
	bool mainFunction(string str) {

		int length = str.length();


		for (int i = 0; i < length; i++) {
			char a = str[i];
			char b = str[length - i - 1];

			if (a != b) {
				return false;
			}

		}


		return true;
	}

};