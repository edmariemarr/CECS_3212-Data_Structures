/*
SANTA CLAUS NICE LIST

Naughty List : names of those who get coal in their stockings.
Nice List: names of those who will receive gifts.

Each obj in the list contains a name (string) and a list of that person's gifts (instance of an ADT list).
Design an ADT for the objects in the nice list.
Specify each ADT operation by stating its purpose, describing its parameters, and writing preconditions, post conditions,
and a pseudocode version of its header.
Then, write a template interface for the ADT that includes javadoc-style comments.
*/

#include <iostream>
using namespace std;
#include "NiceList.h"

int main() {
	NiceList nice1, nice2, nice3;

	nice1.setName("Ed");
	nice1.addGifts(1, "money");
	nice1.addGifts(2, "chocolate");

	nice2.setName("Marie");
	nice2.addGifts(1, "books");
	nice2.addGifts(2, "travel");
	nice2.addGifts(3, "food");

	nice3.setName("Edmarie");
	nice3.addGifts(1, "vacation");
	nice3.addGifts(2, "tuition paid in full");
	nice3.addGifts(3, "concert tickets");

	cout << "--- Display NICE LIST ---" << endl;
	cout << nice1;
	cout << endl;
	cout << nice2;
	cout << endl;
	cout << nice3;
	
	system("pause");
	return 0;
}

/*
-- - Display NICE LIST-- -
Name: Ed
Gift : money
Gift : chocolate

Name : Marie
Gift : books
Gift : travel
Gift : food

Name : Edmarie
Gift : vacation
Gift : tuition paid in full
Gift : concert tickets
Press any key to continue . . .
*/
