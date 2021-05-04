#pragma once
#ifndef GIFTS
#define GIFTS
#include "ArrayList.h"
#include <string>

class Gifts {
private:
	string xmasGifts;
public:
	Gifts();
	Gifts(const Gifts& aGift);
	Gifts(string giftName);
	void setGiftName(string giftName);
	string getGiftName() const;
	friend istream& operator >> (istream& strm, Gifts& obj);
	friend ostream& operator << (ostream& strm, const Gifts& obj);
};
#endif

Gifts::Gifts() : xmasGifts("Something") {}

Gifts::Gifts(string giftName) {
	setGiftName(giftName);
}

Gifts::Gifts(const Gifts& aGift) {
	setGiftName(aGift.getGiftName());
}

void Gifts::setGiftName(string giftName) {
	xmasGifts = giftName;
}

string Gifts::getGiftName() const {
	return xmasGifts;
}

istream& operator >> (istream& strm, Gifts& obj)
{
	cout << "Gift: ";
	strm >> obj.xmasGifts;
	return strm;
}
ostream& operator << (ostream& strm, const Gifts& obj)
{
	strm << "Gift: " << obj.getGiftName() << endl;
	return strm;
}
	
