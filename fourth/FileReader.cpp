#include "FileReader.h"

void FileReader::readFile(std::string fileName, std::vector<std::map<std::string, std::string>> &passportVector) {
    std::ifstream mapFile;
    std::string line;
	std::string passportString;
	std::map<std::string, std::string> passportMap;

    mapFile.open(fileName);

	while (std::getline(mapFile, line)) {
		if (line.size() > 0) {
			parseLine(line, passportMap);
		} else {
			passportVector.push_back(passportMap);
			passportMap.clear();
		}
	}

    mapFile.close();
}

void FileReader::parseLine(std::string line, std::map<std::string, std::string> &passportMap) {
	std::string keyValueDelim = ":";
	std::string field;

	std::istringstream ss(line);
	
	while (std::getline(ss, field, ' ')) {
		std::string key = field.substr(0, field.find(keyValueDelim));
		std::string value = field.substr(field.find(keyValueDelim));
		passportMap.emplace(key, value);
	}

}