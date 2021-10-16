#pragma once
#include <string>
#include <vector>
#include <iostream>

class PolicyController {
	
	struct Line {
		int min;
		int max;
		char letter;
		std::vector<char> password;

		Line(int _min, int _max, char _letter, std::vector<char> _password)
			: min(_min), max(_max), letter(_letter), password(_password) {}
	};

	public: 
		static void checkPasswords(std::vector<std::string> &vec);

	private:
		static Line getLine(std::string lineContent);
		static int parseMin(std::string &lineContent);
		static int parseMax(std::string &lineContent);
		static char parseLetter(std::string &lineContent);
		static std::vector<char> parsePassword(std::string &lineContent);
};

