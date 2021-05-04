#include <iostream>
using namespace std;
#include "ArrayList.h"
#include <string>

int main() {
	ArrayList<string> list;

	int size;
	cout << "How many elements will the list contain?" << endl;
	cin >> size;

	string item;
	cout << "Enter the items of the list:" << endl;
	for (int i = 1; i <= size; i++) {
		cout << "Element #" << i << ": " << endl;
		cin >> item;
		list.insert(i, item);
	}

	cout << "LIST:" << endl;
	list.display();

	string item2;
	cout << "Enter an item to search its position: " << endl;
	cin >> item2;
	cout << "The position of the item " << item2 << " in the list is: " << list.getPosition(item2) << endl;

	string item3;
	cout << "Enter an item to check if the list contains it: " << endl;
	cin >> item3;
	if (list.contains(item3) == true) {
		cout << "The item " << item3 << " is in the list." << endl;
	}
	else {
		cout << "The item " << item3 << " is not in the list." << endl;
	}

	string item4;
	cout << "Enter the item to remove from the list." << endl;
	cin >> item4;
	list.remove(item4);
	
	cout << "LIST:" << endl;
	list.display();

	system("pause");
	return 0;
}

/*
How many elements will the list contain?
3
Enter the items of the list:
Element #1:
hola
Element #2:
hello
Element #3:
hi
LIST:
hola
hello
hi
Enter an item to search its position:
hello
The position of the item hello in the list is: 2
Enter an item to check if the list contains it:
hello
The item hello is in the list.
Enter the item to remove from the list.
hello
LIST:
hola
hi
Press any key to continue . . .
*/