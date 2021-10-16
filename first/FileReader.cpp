#include "FileReader.h"

void FileReader::readFile(std::string fileName, std::vector<std::string>& vec) {
    
    std::ifstream in(fileName.c_str());
    
    if (in) {
        std::string str;
        while (std::getline(in, str)) {
            if (str.size() > 0)
                vec.push_back(str);
        }
    }
    in.close();
}