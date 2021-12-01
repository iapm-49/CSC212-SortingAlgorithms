#include <iostream>
#include <string>
#include "insertionSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "countSort.h"

int main() {
    int algorithmFileType;
    int textFileType;
    int fileProperty;
    
    std::cout<< "Welcome to our Algorithm Project, please pick your Sorting Algorithm:" << "\n";
    std::cout<< "1 = Insertion Sort" << "           " << "2 = Merge Sort" << "\n" << "3 = Quick Sort" << "               " << "4 = Count Sort" << "\n" << "Your Selection: ";
    std::cin>> algorithmFileType;
    
    std::cout<< "\n" << "Now pick what size file you want:" << "\n";
    std::cout<< "1 = Small File Size(100)" << "               " << "2 = Medium File Size(500)" << "\n" << "3 = large File Size(1500)" << "              " << "4 = Extra Large File Size(8000)(not for the faint of heart)" << "\n" << "Your Selection: ";
    std::cin>> textFileType;
    
    std::cout<< "\n" "Now select the file's property:" << "\n";
    std::cout<< "1 = Sorted" << "           " << "2 = Reversed" << "\n" << "3 = Random" << "           " << "4 = Partially Sorted" << "\n" << "Your Selection: ";
    std::cin>> fileProperty;
}
