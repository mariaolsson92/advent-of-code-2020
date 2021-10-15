#include "EntryFinder.h"

void EntryFinder::findEntries(std::vector<int>& vect) {
	auto sortedVec = vect;
	std::sort(sortedVec.begin(), sortedVec.end());

	for (auto entry : vect) {
		if (std::binary_search(sortedVec.begin(), sortedVec.end(), getDiff(entry))) {
			printEntries(entry, getDiff(entry));
			break;
		}
	}
}

int EntryFinder::getDiff(int entry) {
	return 2020 - entry;
}

void EntryFinder::printEntries(int entryOne, int entryTwo) {
	std::cout << "First entry: " << entryOne << ". Second entry: " << entryTwo <<std::endl;
	std::cout << "Multiplied: " << entryOne * entryTwo;
}