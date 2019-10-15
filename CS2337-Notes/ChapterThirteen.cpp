// Chapter Thirteen source file

#include "ChapterThirteen.h"

#include <iostream>

int chapterThirteen::nerd = 0;

chapterThirteen::chapterThirteen() {
	_i = 0;
	_j = 0;
}

// Define the prefix increment operator.
chapterThirteen chapterThirteen::operator++() {
	_i++;
	_j++;
	return *this;
}

// Define the postfix increment operator.
chapterThirteen chapterThirteen::operator++(int) {
	chapterThirteen temp = *this;
	++*this;
	return temp;
}

// Define the array subscript operator for non-constant arrays.
int& chapterThirteen::operator[](int index) {
	return intList[index];
}

// Define the array subscript operator for constant arrays.
const int& chapterThirteen::operator[](int index) const {
	return intList[index];
}

int chapterThirteen::funcA(int i) {
	std::cout << "In int chapterThirteen::funcA()" << std::endl;
	return i;
}

float chapterThirteen::funcA(float i) {
	std::cout << "In float chapterThirteen::funcA()" << std::endl;
	return i;
}

double chapterThirteen::funcA(double i) {
	std::cout << "In double chapterThirteen::funcA()" << std::endl;
	return i;
}

// Virtual functions can be defined.
void virtualThirteen::function() {
	std::cout << "In virtualThirteen::function()" << std::endl;
}

void derivedThirteen::function() {
	std::cout << "In derivedThirteen::function()" << std::endl;
}

// This is how you define templates.
template <class T>
inline T chapterThirteen::GetMax(T a, T b) {
	T result;
	result = (a < b) ? a : b;
	return result;
}

// This is how you define a template class function.
template <class T>
inline T templateThirteen<T>::GetMax() {
	T result;
	result = (a < b) ? a : b;
	return result;
}