// Chapter 13 header file

#ifndef CHAPTERTHIRTEEN_H
#define CHAPTERTHIRTEEN_H

class chapterThirteen {
public:
	// This is a static variable. Because it's static, it's a class variable.
	static int nerd;
	// This is an operator overload.
	chapterThirteen operator++();    // Prefix increment operator
	chapterThirteen operator++(int); // Postfix increment operator
	// We can overload the array index (subscript) operator as well.
	int& operator[](int index);             // For non-constant arrays.
	const int& operator[](int index) const; // For constant arrays.
	chapterThirteen();
	// This is a function template in the form of a prototype.
	template <class T> T GetMax(T a, T b);
private:
	// This is a function overload.
	int funcA(int i);
	float funcA(float i);
	double funcA(double i);
	int _i, _j;
	int intList[10];
};

// This is an abstract class. Abstract classes contain virtual methods and variables.
// You cannot instantiate an abstract class.
class virtualThirteen {
public:
	virtual void function();
};

// This is a class inheriting an abstract class. This class can be instantiated.
class derivedThirteen : public virtualThirteen {
public:
	void function();
};

// This is a class template. We can't have it as a prototype for obvious reasons.
template <class T> class templateThirteen {
public:
	// We can have function prototypes in template classes.
	T GetMax();
private:
	T a, b;
};

#endif // !CHAPTERTHIRTEEN_H
