#pragma once
#include "FileReader.h"
#include "EntryFinder.h"

int main() {
    std::string fileName = "data/first.txt";
    std::vector<int> vec;
    FileReader::readFile(fileName, vec);
    EntryFinder::findEntries(vec);
}
