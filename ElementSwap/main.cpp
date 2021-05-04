#include <iostream>
using namespace std;
#include "ArrayList.h"

int main() {
	ArrayList <string> theArray;

	// List
	theArray.insert(1, "pencil");
	theArray.insert(2, "eraser");
	theArray.insert(3, "backpack");
	theArray.insert(4, "computer");
	theArray.insert(5, "notebook");
	
	// Display
	cout << "Display list: " << endl;
	for (int i = 1; i <= theArray.getLength(); i++) {
		cout << theArray.getEntry(i) << endl;
	}

	int i, j;
	cout << "What two elements should we swap? Enter their indexes: " << endl;
	cout << "First element: " << endl;
	cin >> i;
	cout << "Second element: " << endl;
	cin >> j;

	int swap = theArray.swapResult(i, j);
	if (swap == true) {
		cout << "Swap successful." << endl;
	}
	else {
		cout << "Swap unsuccessful." << endl;

	}
	cout << "Display list after swap: " << endl;
	for (int i = 1; i <= theArray.getLength(); i++) {
		cout << theArray.getEntry(i) << endl;
	}
	
	system("pause");
	return 0;
}

/*
Display list:
pencil
eraser
backpack
computer
notebook
What two elements should we swap? Enter their indexes:
First element:
1
Second element:
2
Swap successful.
Display list after swap:
eraser
pencil
backpack
computer
notebook
Press any key to continue . . .
*/