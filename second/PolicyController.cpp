#include "PolicyController.h"

void PolicyController::checkFirstPolicy(std::vector<std::string>& vec) {
	int nrOfValidPasswords = 0;
	
	for (auto v : vec) {
		auto line = getLine(v);
		int occurences = std::count(line.password.begin(), line.password.end(), line.letter);
		
		if (occurences >= line.min && occurences <= line.max) {
			nrOfValidPasswords++;
		}
	}

	std::cout << "Nr of valid passwords: " << nrOfValidPasswords << std::endl;
}

void PolicyController::checkSecondPolicy(std::vector<std::string>& vec) {
	int nrOfValidPasswords = 0;

	for (auto v : vec) {
		auto line = getLine(v);

		bool firstPos = line.password[line.min] == line.letter;
		bool secondPos = line.password[line.max] == line.letter;

		if (firstPos != secondPos) {
			nrOfValidPasswords++;
		}
	}

	std::cout << "Nr of valid passwords: " << nrOfValidPasswords << std::endl;
}

PolicyController::Line PolicyController::getLine(std::string lineContent) {
	int min = parseMin(lineContent);
	int max = parseMax(lineContent);
	char letter = parseLetter(lineContent);
	std::vector<char> password = parsePassword(lineContent);
	
	return PolicyController::Line(min, max, letter, password);
}

int PolicyController::parseMin(std::string &lineContent) {
	std::string delim = "-";
	int min = stoi(lineContent.substr(0, lineContent.find(delim)));
	lineContent.replace(0, lineContent.find(delim) + 1, "");
	return min;
}

int PolicyController::parseMax(std::string &lineContent) {
	std::string delim = " ";
	int max = stoi(lineContent.substr(0, lineContent.find(delim)));
	lineContent.replace(0, lineContent.find(delim) + 1, "");
	return max;
}

char PolicyController::parseLetter(std::string &lineContent) {
	std::string delim = ": ";
	std::string lineString = lineContent.substr(0, lineContent.find(delim));
	lineContent.replace(0, lineContent.find(delim) + 1, "");
	return lineString[0];
}

std::vector<char> PolicyController::parsePassword(std::string &lineContent) {
	std::vector<char> password(lineContent.begin(), lineContent.end());
	return password;
}