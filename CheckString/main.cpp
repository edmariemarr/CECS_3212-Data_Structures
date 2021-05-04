#include "LinkedStack.h"
#include <iostream>
using namespace std;

int main() {
	LinkedStack <string>* stack = new LinkedStack<string>();
	string exp1 = "a$a";
	string exp2 = "ab$ab";
	string exp3 = "ab$a";
	string exp4 = "ab$ba";
	
	cout << "CHECKING STRING " << exp1 << endl; // first string
	if (stack->recognizeString(exp1) == true) {
		cout << "The string is in language." << endl;
	}
	else {
		cout << "The string is not in language." << endl;
	}
	cout << "CHECKING STRING " << exp2 << endl; // second string
	if (stack->recognizeString(exp2) == true) {
		cout << "The string is in language." << endl;
	}
	else {
		cout << "The string is not in language." << endl;
	}
	cout << "CHECKING STRING " << exp3 << endl; // third string
	if (stack->recognizeString(exp3) == true) {
		cout << "The string is in language." << endl;
	}
	else {
		cout << "The string is not in language." << endl;
	}
	cout << "CHECKING STRING " << exp4 << endl; // fourth string
	if (stack->recognizeString(exp4) == true) {
		cout << "The string is in language." << endl;
	}
	else {
		cout << "The string is not in language." << endl;
	}

	delete stack;
	system("pause");
	return 0;
}

/*
CHECKING STRING a$a
The string is in language.
CHECKING STRING ab$ab
The string is not in language.
CHECKING STRING ab$a
The string is not in language.
CHECKING STRING ab$ba
The string is in language.
Press any key to continue . . .
*/