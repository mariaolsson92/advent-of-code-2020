#include "FileReader.h"

void FileReader::readFile(std::string fileName, std::vector<std::string>& vec) {
    std::ifstream read_file(fileName);
    assert(read_file.is_open());

    std::copy(std::istream_iterator<std::string>(read_file), std::istream_iterator<std::string>(),
        std::back_inserter(vec));

    read_file.close();
}