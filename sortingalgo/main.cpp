#include <iostream>
#include <string>
#include "search.h"

int main(int argc, char* argv[]) {
    std::cout<< "Welcome to our Algorithm Project, please pick your File and Algorithm Type using the letters they equate to: \n";
    std::cout<< "1 = Insertion Sort" << "               " << "2 = Small Sized File (300 Numbers)" << "\n" << "3 = Mergesort" << "               " << "4 = Medium Sized File (700 Numbers)";
    std::string textFileType = argv[1];
    std::string sortingAlgoType = argv[2];
}
