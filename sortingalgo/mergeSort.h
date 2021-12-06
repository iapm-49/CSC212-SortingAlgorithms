#include <iostream>
#include <string>
#include <vector>

class MergeSort {
    public:
        //class constructor
        MergeSort();
        MergeSort(std::string fileType, int size, std::vector<int> &numbers);
        void mergeVector(std::vector<int> &numbers, int low, int middle, int high, int size);
        void mergeSolve(std::vector<int> &numbers, int low, int high, int size);
        void doTheSort(std::vector<int> &numbers, int size);
        void writeFile(std::vector<int> &numbers);
        
};
