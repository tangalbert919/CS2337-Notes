// Chapter 10 source file

#include "ChapterTen.h"

#include <iostream>

// These are function definitions. They give the prototypes found in the header file functionality.
void chapterTen::printMe() {
	std::cout << "Successfully printed!" << std::endl;
}


void chapterTen::staticPrint() {
	std::cout << "From chapterTen::staticPrint()" << std::endl;
}

chapterTen::chapterTen() {
	chapterTen::troll = 0;
	chapterTen::fire = 23.37;
}

chapterTen::chapterTen(int i) {
	chapterTen::troll = i;
	chapterTen::fire = 23.37;
}

chapterTen::~chapterTen() {

}

void chapterTen::testMe() {
	std::cout << "Testing, testing!" << std::endl;
}

bool chapterTen::isThisWorking() {
	return false;
}