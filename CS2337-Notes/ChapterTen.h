// Chapter 10 Header file

#ifndef CHAPTERTEN_H
#define CHAPTERTEN_H

// This is a class. Unless otherwise specified, class members (functions and variables) are private by default.
class chapterTen {
public:
	void printMe();
	chapterTen();
	chapterTen(int i);
	// This is a destructor. When an object of this class goes out of scope, this is fired to destroy the object.
	~chapterTen();
	int machine = 37;
	static void staticPrint();
	// These are protected methods and variables. Public or protected level inheritance is required to inhreit these.
protected:
	void testMe();
	// These are private methods and variables. Only methods in this class can access them. They cannot be inherited.
private:
	int troll;
	double fire;
	bool isThisWorking();
};

#endif // CHAPTERTEN_H
