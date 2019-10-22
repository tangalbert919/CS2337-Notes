// Chapter Eleven header file
// Still contains function prototypes. Definitions still in ChapterEleven.cpp

#ifndef CHAPTERELEVEN_H
#define CHAPTERELEVEN_H

#include "ChapterTen.h"

// This is a class inheriting another class. It cannot access chapterNine's private members.
// All public variables from the base class are initialized when an object of this class is instantiated.
class chapterEleven : public chapterTen {
public:
	void printMe();
	chapterEleven();
	chapterEleven(int i, int j);
private:
	void otherPrint();
	// This is a friend function. Don't expect to ever have to use them.
	friend void befriendMe();
};

#endif // CHAPTERELEVEN_H
