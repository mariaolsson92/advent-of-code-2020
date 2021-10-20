#pragma
#include <iostream>
#include <vector>

class SlopeHandler {
	public: 
		static int countTrees(int deltaX, int deltaY, std::vector<std::vector<char>>& slopeMap);

	private:
		static const char TREE_SYMBOL = '#';

		static bool yCoordIsWithinBounds(int yCoord, int yBoundary);
		static bool xCoordIsWithinBounds(int xCoord, int xBoundary);
		static void resetXCoord(int& xCoord, int xBoundary);
		static bool isTree(char symbol);
		static void printTreeCount(int treeCount);
};

