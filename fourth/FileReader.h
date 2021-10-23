#pragma once
#include <map>
#include <vector>
#include <fstream>
#include <iostream>
#include<sstream>
#include <string.h>

class FileReader
{
	public:
		static void readFile(std::string fileName, std::vector<std::map<std::string, std::string>> &passportVector);

	private:
		static void parseLine(std::string line, std::map<std::string, std::string> &passportMap);
};

