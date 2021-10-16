#include "FileReader.h"


void FileReader::readFile(std::string fileName, std::vector<int>& vec) {
    std::ifstream read_file(fileName);
    assert(read_file.is_open());

    std::copy(std::istream_iterator<int>(read_file), std::istream_iterator<int>(),
        std::back_inserter(vec));

    read_file.close();
}