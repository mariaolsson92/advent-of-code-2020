#pragma once
#include <vector>
#include <string>
#include <map>

class PassportChecker {
public:
	static int checkPassports(std::vector<std::map<std::string, std::string>> &passportVector, std::vector<std::string> &optionalFields);

private:
	static const std::string fieldTypes[8];
};

