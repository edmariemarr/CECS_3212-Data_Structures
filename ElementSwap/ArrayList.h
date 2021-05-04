//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** ADT list: Array-based implementation.
    Listing 9-1.
    @file ArrayList.h */

#ifndef _ARRAY_LIST
#define _ARRAY_LIST

#include "ListInterface.h"
#include "PrecondViolatedExcep.h"

template<class ItemType>
class ArrayList : public ListInterface<ItemType>
{
private:
	static const int DEFAULT_CAPACITY = 5; // Small capacity to test for a full list 
    ItemType items[DEFAULT_CAPACITY];      // Array of list items
    int itemCount;                         // Current count of list items 
    int maxItems;                          // Maximum capacity of the list
   
public:
   ArrayList();
   // Copy constructor and destructor are supplied by compiler
   
   bool isEmpty() const;
   int getLength() const;
   bool insert(int newPosition, const ItemType& newEntry);
   bool remove(int position);
   void clear();
   bool swapResult(int i, int j);
   
   /** @throw PrecondViolatedExcep if position < 1 or 
                                      position > getLength(). */
   ItemType getEntry(int position) const throw(PrecondViolatedExcep);

   /** @throw PrecondViolatedExcep if position < 1 or 
                                      position > getLength(). */
   void setEntry(int position, const ItemType& newEntry) 
                               throw(PrecondViolatedExcep);
}; // end ArrayList

template<class ItemType>
ArrayList<ItemType>::ArrayList() : itemCount(0), maxItems(DEFAULT_CAPACITY)
{
}  // end default constructor

template<class ItemType>
bool ArrayList<ItemType>::isEmpty() const
{
    return itemCount == 0;
}  // end isEmpty

template<class ItemType>
int ArrayList<ItemType>::getLength() const
{
    return itemCount;
}  // end getLength

template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType& newEntry)
{
    bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount + 1) &&
        (itemCount < maxItems);
    if (ableToInsert)
    {
        // Make room for new entry by shifting all entries at
        // positions >= newPosition toward the end of the array
        // (no shift if newPosition == itemCount + 1)
        for (int pos = itemCount; pos >= newPosition; pos--)
            items[pos] = items[pos - 1];

        // Insert new entry
        items[newPosition - 1] = newEntry;
        itemCount++;  // Increase count of entries
    }  // end if

    return ableToInsert;
}  // end insert

template<class ItemType>
bool ArrayList<ItemType>::remove(int position)
{
    bool ableToRemove = (position >= 1) && (position <= itemCount);
    if (ableToRemove)
    {
        // Remove entry by shifting all entries after the one at
        // position toward the beginning of the array
        // (no shift if position == itemCount)
        for (int fromIndex = position, toIndex = fromIndex - 1; fromIndex < itemCount;
            fromIndex++, toIndex++)
            items[toIndex] = items[fromIndex];

        itemCount--;  // Decrease count of entries
    }  // end if

    return ableToRemove;
}  // end remove

template<class ItemType>
void ArrayList<ItemType>::clear()
{
    itemCount = 0;
}  // end clear

template<class ItemType>
ItemType ArrayList<ItemType>::getEntry(int position) const throw(PrecondViolatedExcep)
{
    // Enforce precondition
    bool ableToGet = (position >= 1) && (position <= itemCount);
    if (ableToGet)
        return items[position - 1];
    else
    {
        string message = "getEntry() called with an empty list or ";
        message = message + "invalid position.";
        throw(PrecondViolatedExcep(message));
    }  // end if
}  // end getEntry

template<class ItemType>
void ArrayList<ItemType>::setEntry(int position, const ItemType& newEntry) throw(PrecondViolatedExcep)
{
    // Enforce precondition
    bool ableToSet = (position >= 1) && (position <= itemCount);
    if (ableToSet)
        items[position - 1] = newEntry;
    else
    {
        string message = "setEntry() called with an empty list or ";
        message = message + "invalid position.";
        throw(PrecondViolatedExcep(message));
    }  // end if
}  // end setEntry

template<class ItemType>
bool ArrayList<ItemType>::swapResult(int i, int j) {
    bool result = false;

    string iValue = getEntry(i);
    string jValue = getEntry(j);

    if (i > 0 && i <= getLength() && j > 0 && j <= getLength()) {
        result = true;
        remove(i);
        insert(i, jValue); 
        remove(j);
        insert(j, iValue);
        }
    return result;
}
//  End of implementation file.
#endif 
