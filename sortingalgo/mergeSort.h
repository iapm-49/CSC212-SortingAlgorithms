#include <iostream>
#include <string>
#include <vector>

class MergeSort {
    public:
        //class constructor
        MergeSort();
        
        MergeSort(std::string fileType, int size, std::vector<int> &numbers);
        void doTheSort(std::vector<int> &numbers, int size);
        void writeFile(std::vector<int> &numbers);
        
};
