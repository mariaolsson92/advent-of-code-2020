#pragma once
#include <cassert>
#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <string>

class FileReader {
	public:
		static void readFile(std::string fileName, std::vector<int>& vec);
};

