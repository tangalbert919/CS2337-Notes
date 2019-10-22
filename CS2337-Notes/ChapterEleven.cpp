// Chapter 11 source file

#include "ChapterEleven.h"

#include <iostream>

void chapterEleven::printMe() {
	chapterTen::printMe();
}

chapterEleven::chapterEleven() {

}

// This is a constructor calling its base constructor.
chapterEleven::chapterEleven(int i, int j) : chapterTen::chapterTen(i) {

}

void chapterEleven::otherPrint() {
	std::cout << machine << std::endl;
}

void befriendMe(){

}
