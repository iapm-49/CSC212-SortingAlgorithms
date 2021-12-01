#include <iostream>
#include <string>
#include "search.h"

int main() {
    int algorithmFileType;
    int textFileType;
    
    std::cout<< "Welcome to our Algorithm Project, please pick your Sorting Algorithm:" << "\n";
    std::cout<< "1 = Insertion Sort" << "               " << "2 = Merge Sort" << "\n" << "3 = Quick Sort" << "               " << "4 = Count Sort";
    std::cin>> algorithmFileType;
    
    std::cout<< "Now pick what size file you want:";
    std::cout<< "1 = Small File Size(100)" << "               " << "2 = Medium File Size(500)" << "\n" << "3 = large File Size(1500)" << "               " << "4 = Extra Large File Size(8000)(not for the faint of heart)";
}
