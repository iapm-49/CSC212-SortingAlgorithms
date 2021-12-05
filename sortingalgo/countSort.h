#include <iostream>
#include <string>
#include <vector>

class CountSort {
    public:
        //class constructor
        CountSort();
        CountSort(std::string fileType, int size, std::vector<int> &numbers);
        void writeFile(std::vector<int> &numbers);
        void doTheSort(std::vector<int> &numbers, int size);
        
        //class call
        
        //
};