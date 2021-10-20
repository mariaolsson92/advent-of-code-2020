#pragma once
#include "FileReader.h"
#include "SlopeHandler.h"

int main()
{
	std::vector<std::vector<char>> slopeMap;
	FileReader::readFile("data/input.txt", slopeMap);

	size_t product = 1;

	product *= SlopeHandler::countTrees(1, 1, slopeMap);
	product *= SlopeHandler::countTrees(3, 1, slopeMap);
	product *= SlopeHandler::countTrees(5, 1, slopeMap);
	product *= SlopeHandler::countTrees(7, 1, slopeMap);
	product *= SlopeHandler::countTrees(1, 2, slopeMap);

	std::cout << "The product of the trees encountered is: " << product;
}
