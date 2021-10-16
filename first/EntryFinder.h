#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

class EntryFinder {

	public: 
		static void findTwoEntries(std::vector<int>& vect);
		static void findThreeEntries(std::vector<int>& vect);

	private:
		static const int GOAL_NUMBER = 2020;

		static int getDiff(int entry);
		static void printEntries(std::vector<int> entries);
};

