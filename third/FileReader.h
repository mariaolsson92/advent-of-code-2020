#pragma once
#include <vector>
#include <fstream>
#include <string>

class FileReader {
	public: 
		static void readFile(std::string fileName, std::vector<std::vector<char>> &slopeMap);
};

