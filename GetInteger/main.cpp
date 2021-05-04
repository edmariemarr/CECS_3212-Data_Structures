#include "ArrayQueue.h"
#include <iostream>
using namespace std;

int main() {
	ArrayQueue<int> aQueue;

    cout << "The following program converts a decimal value into an integer." << endl;
    double value = 247.102;
	char ch = aQueue.enqueue(value);
	
    do {   
        aQueue.dequeue();
    } while (isblank(ch));

    int n = 0;
    bool done = false;

    do {
        n = 10 * n + (value);
        done = aQueue.isEmpty();
        if (!done)
            aQueue.dequeue();
    } while (!done && isdigit(ch));

    cout << "--- INPUT: A VALUE AS A DECIMAL ---" << endl;
    cout << value << endl;
    cout << "--- OUTPUT: THE VALUE AS AN INTEGER ---" << endl;
    cout << n << endl;

    system("pause");
    return 0;
}

/*
The following program converts a decimal value into an integer.
--- INPUT: A VALUE AS A DECIMAL ---
247.102
--- OUTPUT: THE VALUE AS AN INTEGER ---
247
Press any key to continue . . .
*/