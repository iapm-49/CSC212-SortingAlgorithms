#include <iostream>
#include <string>
#include <vector>

class InsertionSort {
    public:
        //class constructor
        InsertionSort();
        InsertionSort(std::string fileType, int size, std::vector<int> &numbers);
        void writeFile(std::vector<int> &numbers);
        void doTheSort(std::vector<int> &numbers, int size);
        
        //class call
        
        //
};