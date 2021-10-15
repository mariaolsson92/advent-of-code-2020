#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

class EntryFinder {
	public: 
		static void findEntries(std::vector<int>& vect);

	private:
		static int getDiff(int entry);
		static void printEntries(int entryOne, int entryTwo);
};

