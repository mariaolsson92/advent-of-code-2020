#pragma once
#include "FileReader.h"
#include "SlopeHandler.h"

int main()
{
	std::vector<std::vector<char>> slopeMap;
	FileReader::readFile("data/input.txt", slopeMap);
	SlopeHandler::countTrees(3, 1, slopeMap);
}
