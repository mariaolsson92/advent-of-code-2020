#pragma once
#include "FileReader.h"
#include "PolicyController.h"

int main()
{
    std::vector<std::string> vec;
    FileReader::readFile("data/input.txt", vec);
    PolicyController::checkFirstPolicy(vec);
    PolicyController::checkSecondPolicy(vec);
}
