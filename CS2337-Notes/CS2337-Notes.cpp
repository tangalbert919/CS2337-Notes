// This is the main file.

#include <iostream>
#include <cassert>
#include <utility>

#include "ChapterSeven.h"
#include "ChapterNine.h"
#include "ChapterTen.h"
#include "ChapterEleven.h"
#include "ChapterThirteen.h"

// Chapter 13 (maybe): Exception
void functionException() {
	try {
		std::cout << "In try functionException block 1" << std::endl;
		// This will force us into the catch blocks.
		throw(333);
		std::cout << "In try functionException block 2" << std::endl;
	}
	catch (int ex) {
		std::cout << "In functionException catch int ex block" << std::endl;
	}
	// Apparently, you can do catch overloads.
	catch (...) {
		std::cout << "In functionException catch ... block" << std::endl;
	}
}

int main()
{
	int a[] = { 1,2,3 };
	int* b;
	b = new int[50];

	// These two lines will output index 1 of array a[].
	std::cout << a[1] << *(a + 1) << *(1 + a);
	std::cout << 1[a] << std::endl;
	// This next line will output index 2 of the const char "abcd".
	std::cout << "abcd"[2] << std::endl;

	int i = 0;
	int j = 1;
	// This "if" statement will compile and "This works fine!" will print.
	// However, assigning a constant in boolean context is not what you should be doing in an "if" statement.
	if (i = 7) {
		std::cout << "This works fine!" << std::endl;
	}

	// Chapter 4: The assert function
	assert(i > j);
	// This function will terminate if the expression inside the parentheses evaluates to false.

	// Chapter 7: Enumerations
	// This is an enumeration. It is a data type defined by the user. It contains a reference to something. See if you can spot it.
	enum classes {archer, lancer, rider, caster, saber, assassin, berserker};
	// You can define variables using this enumeration.
	classes illya = berserker;
	// This next line is illegal because "1" is not in the Enumeration "classes".
	//classes rin = 1;
	// Arithmetic operations are not allowed, followed by "++" and "--". Instead, you must use the cast operator:
	illya = static_cast<classes>(illya + 1);
	// In a for loop, it would look something like this:
	for (classes shirou = lancer; shirou <= berserker; shirou = static_cast<classes>(shirou + 1)) {
		std::cout << "Have you figured out the reference yet?" << std::endl;
	}
	// End of reference

	// You can also define variables of an enumeration type when you define an enumeration type:
	enum people {yuuki, lumina, infinitychan, jenny, weeby} friends;
	// This is an anonymous enumeration.
	enum {nerd, idiot} typesOfPeople;
	// A typedef statement is used to create an alias to an existing data type. Here, I will create an alias called "cards".
	typedef classes cards;

	// Refer to ChapterSeven.h and ChapterSeven.cpp on namespaces.
	random::printResult();
	std::cout << random::N << std::endl;

	// Chapter 9
	// This is how you use a struct. The struct called "meep" is defined in "ChapterNine.h".
	meep machine;
	// To access members of a struct, use the member access operator (.).
	machine.cs = 23.37;
	machine.robot = 0;
	printStruct(machine);
	
	// Chapter 10
	// This is how you instantiate a class variable. The next line invokes the default constructor.
	chapterTen reboot;
	i = reboot.machine;
	// This is how you can use a static function.
	chapterTen::staticPrint();
	// This is how you instantiate a class variable with a non-default constructor.
	chapterTen shutdown(i);
	std::cout << shutdown.machine << std::endl;
	// Chapter 11
	chapterEleven startup;
	startup.printMe();
	std::cout << startup.machine << std::endl;

	// Chapter 12
	// This is a pointer. A pointer is a variable whose content is a memory address.
	int* p;
	// Pointers can only be assigned addresses. This is how you do that.
	p = &i;
	std::cout << "AND NOW, FOR THIS: " << *p << std::endl;
	if (*p == i) {

	}
	// We can also declare pointers to other data types, such as struct:
	meep* meepPtr;
	meepPtr = &machine;
	// Both of these next two statements are equivalent.
	(*meepPtr).robot = 42;
	meepPtr->robot = 42;
	// New and delete operators: "new" allocates memory of a designated type and returns a pointer. "delete" removes dynamic variables.
	int* q = new int;
	delete q;
	// Apparently, there are smart pointers. You can't change these pointers.
	std::unique_ptr<int> valuePtr(new int(15));
	std::unique_ptr<int> newValuePtr(move(valuePtr));
	std::cout << "valuePtrNew = " << *newValuePtr << std::endl;

	// Chapter 13
	chapterThirteen restart;
	// This is how you use a template function.
	//int k = restart.GetMax<int>(i, j);
	//std::cout << k << std::endl;

	// You can instantiate abstract classes, so long as they don't have pure virtual methods.
	virtualThirteen virtThirteenObj;
	derivedThirteen deriThirteenObj;

	virtualThirteen* ptr;
	ptr = &virtThirteenObj;
	ptr->function();

	// You cannot assign a pointer to a derived class object if the base class is not public.
	ptr = &deriThirteenObj;
	ptr->function();

	// This is how you use a class variable.
	chapterThirteen::nerd = 666;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

