#include "LinkedStack.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	LinkedStack <int>* stack = new LinkedStack<int>();
	string exp;
	char ch;
	int operand1, operand2, result;

	cout << "Enter the postfix expression to evaluate: " << endl;
	cin >> exp;

	for (int i = 0; i < exp.size(); i++) {
		ch = exp[i];
		if (ch != '+' && ch != '*' && ch != '-' && ch != '/') { // if ch is an operand
			stack->push(ch - '0');
			cout << "After stack push: " << endl;
			stack->display();
		}
		else { // if ch is an operator
				operand2 = stack->peek(); // top of stack
				cout << "After operand2 peek: " << endl;
				stack->display();
				stack->pop();
				cout << "After operand2 pop: " << endl;
				stack->display();
				operand1 = stack->peek(); // top of stack
				cout << "After operand1 peek: " << endl;
				stack->display();
				stack->pop();
				cout << "After operand1 pop: " << endl;
				stack->display();
				if (ch == '+') {
					result = operand1 + operand2;
				}
				else if (ch == '-') {
					result = operand1 - operand2;
				}
				else if (ch == '/') {
					result = operand1 / operand2;
				}
				else if (ch == '*') {
					result = operand1 * operand2;
				}
			stack->push(result);
		}
	}
	cout << endl;
	cout << "The end result for the expression " << exp << " is: " << endl;
	stack->display();
	delete stack;

	system("pause");
	return 0;
}

/*
Enter the postfix expression to evaluate:
234+*
After stack push:
2
After stack push:
3 2
After stack push:
4 3 2
After operand2 peek:
4 3 2
After operand2 pop:
3 2
After operand1 peek:
3 2
After operand1 pop:
2
After operand2 peek:
7 2
After operand2 pop:
2
After operand1 peek:
2
After operand1 pop:


The end result for the expression 234+* is:
14
Press any key to continue . . .
*/