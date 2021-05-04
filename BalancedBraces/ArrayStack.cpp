//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Listing 7-1
    @file ArrayStack.cpp */
#include <cassert>       // For assert
#include "ArrayStack.h"  // Header file
#include <iostream>
using namespace std;

template<class ItemType>
ArrayStack<ItemType>::ArrayStack() : top(-1)
{
}  // end default constructor

// Copy constructor and destructor are supplied by the compiler

template<class ItemType>
bool ArrayStack<ItemType>::isEmpty() const
{
	return top < 0;	
}  // end isEmpty

template<class ItemType>
bool ArrayStack<ItemType>::push(const ItemType& newEntry)
{
	bool result = false;	
	if (top < MAX_STACK - 1)  // Does stack have room for newEntry?
	{
		top++;
		items[top] = newEntry;
		result = true;
	}  // end if
   
	return result;
}  // end push


template<class ItemType>
bool ArrayStack<ItemType>::pop()
{
	bool result = false;
	if (!isEmpty())
	{
		top--;
		result = true;
	}  // end if
   
	return result;
}  // end pop


template<class ItemType> 
ItemType ArrayStack<ItemType>::peek() const
{
	assert(!isEmpty());  // Enforce precondition
   
	// Stack is not empty; return top
	return items[top];
}  // end peek

template<class ItemType>
bool ArrayStack<ItemType>::checkBraces(char aChar[])
{
	ArrayStack<char> aStack;
	bool result = true; // balanced so far
	int i = 0;

	while(result == true && i < strlen(aChar)) {
		char ch = aChar[i];
		i++;
		if (ch == '{')
			aStack.push('{');
		else if (ch == '}') {
			if (!aStack.isEmpty())
				aStack.pop();
			else
				result = false;
		}
	}
	if (result == true && aStack.isEmpty())
		return true;
	else
		return false;
} 
