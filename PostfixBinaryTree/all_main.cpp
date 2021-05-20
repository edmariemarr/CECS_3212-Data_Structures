#include "BinaryNodeTree.h"
#include<iostream>
#include <string>
using namespace::std;

template<class T>
void display(T& anItem) {
	cout << anItem << ",";
}

int main() {
	BinaryNodeTree<char> tree1, tree2, tree3, tree4, tree5;

    // INFIX EXPRESSION TO POSTFIX EXPRESSION
	// ((x+y)^2)+((x-4)/3)"
	// RESULT MUST BE x y + 2 ^ x 4 - 3 / +
	
	tree1.setRootData('-');
	tree1.attachLeft('x');
	tree1.attachRight('4');
	tree2.setRootData('/');
	tree2.attachRight('3');
	tree2.attachLeftSubtree(&tree1);
	tree3.setRootData('+');
	tree3.attachRight('y');
	tree3.attachLeft('x');
	tree4.setRootData('^');
	tree4.attachRight('2');
	tree4.attachLeftSubtree(&tree3);
	tree5.setRootData('+');
	tree5.attachLeftSubtree(&tree4);
	tree5.attachRightSubtree(&tree2);

	cout << "The postfix expression of ((x+y)^2)+((x-4)/3) is:" << endl;
	tree5.postorderTraverse(display);
	cout << endl;

    system("pause");
    return 0;
}

