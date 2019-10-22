// Chapter 9 Header file
// Contains structs.

#ifndef CHAPTERNINE_H
#define CHAPTERNINE_H

// A struct is a definition, not a declaration. By default, all members of a struct are public.
struct meep {
	int robot;
	double cs;
};

// Struct variables can be passed as a parameter by value or reference.
void printStruct(meep i);
#endif // CHAPTERNINE_H
