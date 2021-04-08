#include "ArrayStack.cpp"
#include <iostream>
using namespace std;

int main() {
	ArrayStack<char> braces;

	char check[] = "x{{yz}}}";
	cout << "For x{{yz}}}" << endl;
	if (braces.checkBraces(check) == true) {
		cout << "The braces are balanced." << endl;
	}
	else {
		cout << "The braces are unbalanced." << endl;
	}

	char check2[] = "{x{y{{z}}}";
	cout << "For {x{y{{z}}}" << endl;
	if (braces.checkBraces(check2) == true) {
		cout << "The braces are balanced." << endl;
	}
	else {
		cout << "The braces are unbalanced." << endl;
	}

	char check3[] = "{{{x}}}";
	cout << "For {{{x}}}" << endl;
	if (braces.checkBraces(check3) == true) {
		cout << "The braces are balanced." << endl;
	}
	else {
		cout << "The braces are unbalanced." << endl;
	}

	system("pause");
	return 0;
}

/*
For x{{yz}}}
The braces are unbalanced.
For {x{y{{z}}}
The braces are unbalanced.
For {{{x}}}
The braces are balanced.
Press any key to continue . . .
*/