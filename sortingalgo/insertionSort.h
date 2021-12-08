#include <iostream>
#include <string>
#include <vector>

class InsertionSort {
    public:
        //class constructor
        InsertionSort();
        //class call
        InsertionSort(std::string fileType, int size, std::vector<int> &numbers);
        //writes the resulting sorted numbers to a file
        void writeFile(std::vector<int> &numbers);
        //initiates insertion sort algorithm
        void doTheSort(std::vector<int> &numbers, int size);
        
};