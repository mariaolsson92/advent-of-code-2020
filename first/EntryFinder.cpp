#include "EntryFinder.h"

void EntryFinder::findTwoEntries(std::vector<int>& vect) {
	auto sortedVec = vect;
	std::sort(sortedVec.begin(), sortedVec.end());

	for (auto entry : vect) {
		if (std::binary_search(sortedVec.begin(), sortedVec.end(), getDiff(entry))) {
			std::vector<int> entries{ entry, getDiff(entry) };
			printEntries(entries);
			break;
		}
	}
}

void EntryFinder::findThreeEntries(std::vector<int>& vect) {
	auto sortedVec = vect;
	std::sort(sortedVec.begin(), sortedVec.end());

	for (auto firstEntry : vect) {
		for (auto secondEntry : vect) {
			if (std::binary_search(sortedVec.begin(), sortedVec.end(), getDiff(firstEntry + secondEntry))) {
				std::vector<int> entries{ firstEntry, secondEntry, getDiff(firstEntry + secondEntry) };
				printEntries(entries);
				return;
			}
		}
	}
}

int EntryFinder::getDiff(int entry) {
	return GOAL_NUMBER - entry;
}

void EntryFinder::printEntries(std::vector<int> entries) {
	int product = 1;

	for (int i = 0; i < entries.size(); i++) {
		std::cout << i + 1 << " entry: " << entries[i] << std::endl;
		product *= entries[i];
	}
	
	std::cout << "Multiplied: " << product << std::endl;
}