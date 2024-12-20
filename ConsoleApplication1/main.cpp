#include <iostream>
#include "line_transoformation.h"

int main()
{
    DoubleList<char> DoubleList_line;
    OneList<char> OneList_line;

    char letter;
    std::cin >> letter;
    while (true) {
        DoubleList_line.push_back(letter);
        OneList_line.push_back(letter);
        std::cin >> letter;
        if (letter == '.') {
            DoubleList_line.push_back('\0');
            OneList_line.push_back('\0');
            break;
        }
    }
    
    DoubleList_line = line_transformation(DoubleList_line);
    OneList_line = line_transformation(OneList_line);

    std::cout << "final result Double: ";

    for (int i = 0; i < DoubleList_line.size(); i++) {
        std::cout << DoubleList_line[i] << "";
    }
    std::cout << std::endl;


    std::cout << "final result One: ";
    for (int i = 0; i < OneList_line.size(); i++) {
        std::cout << OneList_line[i] << "";
    }
    std::cout << std::endl;
}