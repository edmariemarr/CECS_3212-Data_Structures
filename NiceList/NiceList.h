#pragma once
#ifndef NICE_LIST
#define NICE_LIST
#include "ArrayList.h"
#include "Gifts.h"
#include "string"

class NiceList {
private:
	string name;
	ArrayList<Gifts> gifts;
public:
	NiceList();
	NiceList(string childName, ArrayList<Gifts> prezzies);
	NiceList(const NiceList& aName);
	void setName(string name);
	string getName() const;
	bool addGifts(int position, const Gifts& object);
	bool addGifts(int position, string prezzies);
	friend istream& operator >> (istream& strm, NiceList& obj);
	friend ostream& operator << (ostream& strm, const NiceList& obj);
};
#endif

NiceList::NiceList() : name("Anonymous") 
{}

NiceList::NiceList(string childName, ArrayList<Gifts> prezzies) : name(childName), gifts(prezzies)
{}

NiceList::NiceList(const NiceList& aName) {
	setName(aName.getName());
}

void NiceList::setName(string childName) {
	name = childName;
}

string NiceList::getName() const {
	return name;
}

bool NiceList::addGifts(int position, const Gifts& object) {
	Gifts copy(object);
	return gifts.insert(position, copy);
}

bool NiceList::addGifts(int position, string prezzies) {
	Gifts newEntry(prezzies);
	return gifts.insert(position, newEntry);
}

istream& operator >> (istream& strm, NiceList& obj)
{
		int count;
		cout << "Name: ";
		strm >> obj.name;
		cout << "How many gifts for " << obj.name << ": " << endl;
		strm >> count;
		for (int i = 1; i <= count; i++) {
			Gifts newEntry;
			strm >> newEntry;
			obj.addGifts(i, newEntry);
		}
	return strm;
}

ostream& operator << (ostream& strm, const NiceList& obj)
{
	strm << "Name: " << obj.getName() << endl;
	for (int j = 1; j <= obj.gifts.getLength(); j++) {
		strm << obj.gifts.getEntry(j);
	}
	return strm;
}
