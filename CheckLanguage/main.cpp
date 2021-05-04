#include "ListQueue.h"
#include <iostream>
using namespace std;

int main() {
	ListQueue<char> queue;
	char check[] = "s$s";
	char check1[] = "s$def";

	cout << "INPUT: s$s" << endl;
	if (queue.checkLanguage(check) == true) {
		cout << "Input is in s$s form." << endl;
	}
	else {
		cout << "Input is not in s$s form." << endl;
	}

	cout << endl;
	cout << "INPUT: s$def" << endl;
	if (queue.checkLanguage(check1) == true) {
		cout << "Input is in s$s form." << endl;
	}
	else {
		cout << "Input is not in s$s form." << endl;
	}

	system("pause");
	return 0;
}

/*
INPUT: s$s
Input is in s$s form.

INPUT: s$def
Input is not in s$s form.
Press any key to continue . . .
*/