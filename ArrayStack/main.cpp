#include <iostream>
using namespace std;
#include "ArrayStack.cpp"

int main() {
	ArrayStack<int> stack1, stack2;

	stack1.push(1); // adding values 1 and 2 to top of stack 1
	stack1.push(2);
	stack2.push(3); // adding values 3 and 4 to top of stack 2
	stack2.push(4);
	// DISPLAY 1ST AND 2ND STACK
	cout << "--- DISPLAY FIRST STACK AFTER PUSH 1 AND 2 ---" << endl;
	stack1.display();
	cout << endl;
	cout << "--- DISPLAY SECOND STACK AFTER PUSH 3 AND 4 ---" << endl;
	stack2.display();
	cout << endl;
	stack1.pop(); // removing top of stack 1, which is 2
	// DISPLAY 1ST STACK
	cout << "--- DISPLAY FIRST STACK AFTER POP 2 ---" << endl;
	stack1.display();
	cout << endl;
	int stackTop = stack2.peek(); // adds value at top of stack 2 (which is 4) to stackTop
	stack1.push(stackTop); // adds value 4 from stack 2 to stack 1
	// DISPLAY 1ST STACK
	cout << "--- DISPLAY FIRST STACK AFTER PUSH 4 FROM STACK 2 ---" << endl;
	stack1.display();
	cout << endl;
	stack1.push(5); // adds value 5 to stack 1
	// DISPLAY 1ST STACK
	cout << "--- DISPLAY FIRST STACK AFTER PUSH 5 ---" << endl;
	stack1.display();
	cout << endl;
	stack2.pop(); // removing top of stack 2, which is 4
	// DISPLAY 2ND STACK
	cout << "--- DISPLAY SECOND STACK AFTER POP 4 ---" << endl;
	stack2.display();
	cout << endl;
	stack2.push(6); // adds value 6 to stack 2

	cout << endl;
	cout << "FINAL RESULTS:" << endl;
	cout << "--- DISPLAY FIRST STACK ---" << endl;
	stack1.display();
	cout << endl;
	cout << "--- DISPLAY SECOND STACK ---" << endl;
	stack2.display();
	cout << endl;

	system("pause");
	return 0;
}

/*
--- DISPLAY FIRST STACK AFTER PUSH 1 AND 2 ---
1, 2,
--- DISPLAY SECOND STACK AFTER PUSH 3 AND 4 ---
3, 4,
--- DISPLAY FIRST STACK AFTER POP 2 ---
1,
--- DISPLAY FIRST STACK AFTER PUSH 4 FROM STACK 2 ---
1, 4,
--- DISPLAY FIRST STACK AFTER PUSH 5 ---
1, 4, 5,
--- DISPLAY SECOND STACK AFTER POP 4 ---
3,

FINAL RESULTS:
--- DISPLAY FIRST STACK ---
1, 4, 5,
--- DISPLAY SECOND STACK ---
3, 6,
Press any key to continue . . .
*/