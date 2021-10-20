#include "FileReader.h"

void FileReader::readFile(std::string fileName, std::vector<std::vector<char>>& slopeMap) {
    
    std::ifstream mapFile;
    std::string token;

    mapFile.open(fileName);

    while (!mapFile.eof()) {
        std::getline(mapFile, token);

        std::vector<char> vecRow;
        vecRow.assign(token.begin(), token.end());

        slopeMap.push_back(vecRow);

    }

    mapFile.close();

}