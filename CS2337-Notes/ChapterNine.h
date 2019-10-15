// Chapter Nine Header file
// Contains function prototypes. The definitions are in ChapterNine.cpp.

#ifndef CHAPTERNINE_H
#define CHAPTERNINE_H

// This is a class. Unless otherwise specified, class members (functions and variables) are private by default.
class chapterNine {
public:
	void printMe();
	chapterNine();
	chapterNine(int i);
	// This is a destructor. When an object of this class goes out of scope, this is fired.
	~chapterNine();
	int machine = 37;
// These are protected methods and variables. Public or protected level inheritance is required to inhreit these.
protected:
	void testMe();
// These are private methods and variables. Only methods in this class can access them. They cannot be inherited.
private:
	int troll;
	double fire;
	bool isThisWorking();
};

#endif // CHAPTERNINE_H
