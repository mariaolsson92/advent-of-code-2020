#include "PassportChecker.h"

const std::string PassportChecker::fieldTypes[8] = { "byr", "iyr", "eyr", "hgt", "hcl", "ecl", "pid", "cid" };

int PassportChecker::checkPassports(std::vector<std::map<std::string, std::string>>& passportVector, std::vector<std::string>& optionalFields) {
	int validPassports = 0;

	for (auto passport: passportVector) {
		validPassports++;

		for (auto field : PassportChecker::fieldTypes) {
			if (std::find(optionalFields.begin(), optionalFields.end(), field) != optionalFields.end()) {
				continue;
			}

			if (!passport.count(field)) {
				validPassports--;
				break;
			}
		}
	}

	return validPassports;
}