#include <iostream>
#include <string>
#include <vector>

class CountSort {
    public:
        //class constructor
        CountSort();
        //class call
        CountSort(std::string fileType, int size, std::vector<int> &numbers);
        //writes the resulting sorted numbers to a file
        void writeFile(std::vector<int> &numbers);
        //initiates count sort algorithm
        void doTheSort(std::vector<int> &numbers, int size);
        
};