// Chapter Nine source file

#include "ChapterNine.h"

#include <iostream>

// These are function definitions. They give the prototypes found in the header file functionality.
void chapterNine::printMe() {
	std::cout << "Successfully printed!" << std::endl;
}

chapterNine::chapterNine() {
	chapterNine::troll = 0;
	chapterNine::fire = 23.37;
}

chapterNine::chapterNine(int i) {
	chapterNine::troll = i;
	chapterNine::fire = 23.37;
}

chapterNine::~chapterNine() {

}

void chapterNine::testMe() {
	std::cout << "Testing, testing!" << std::endl;
}

bool chapterNine::isThisWorking() {
	return false;
}
