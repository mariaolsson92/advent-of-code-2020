#include "SlopeHandler.h"

void SlopeHandler::countTrees(int deltaX, int deltaY, std::vector<std::vector<char>>& slopeMap) {
	bool goalReached = false;
	int yCoord = 0;
	int xCoord = 0;
	int yBoundary = slopeMap.size();
	int xBoundary = slopeMap[0].size();
	int treeCount = 0;

	while (!goalReached) {
		yCoord += deltaY;

		if (yCoordIsWithinBounds(yCoord, yBoundary)) {
			xCoord += deltaX;

			if (!xCoordIsWithinBounds(xCoord, xBoundary)) {
				resetXCoord(xCoord, xBoundary);
			}
			
			char symbol = slopeMap[yCoord][xCoord];

			if (isTree(symbol)) {
				treeCount++;
			}
		}
		else {
			goalReached = true;
		}
	}

	printTreeCount(treeCount);
}

bool SlopeHandler::yCoordIsWithinBounds(int yCoord, int yBoundary) {
	return yCoord < yBoundary;
}

bool SlopeHandler::xCoordIsWithinBounds(int xCoord, int xBoundary) {
	return xCoord < xBoundary;
}

void SlopeHandler::resetXCoord(int& xCoord, int xBoundary) {
	xCoord -= xBoundary;
}

bool SlopeHandler::isTree(char symbol) {
	return symbol == TREE_SYMBOL;
}

void SlopeHandler::printTreeCount(int treeCount) {
	std::cout << "Trees encountered: " << treeCount << std::endl;
}