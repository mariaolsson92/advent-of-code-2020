#pragma once
#include "FileReader.h"
#include "PassportChecker.h"

int main() {
	std::vector<std::map<std::string, std::string>> passportVector;
	std::vector<std::string> optionalFields;
	optionalFields.push_back("cid");

	FileReader::readFile("data/input.txt", passportVector);
	int validPassports = PassportChecker::checkPassports(passportVector, optionalFields);

	std::cout << validPassports;
}
