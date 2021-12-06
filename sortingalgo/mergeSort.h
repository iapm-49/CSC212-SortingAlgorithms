#include <iostream>
#include <string>
#include <vector>

class mergeSort {
    public:
        //class constructor
        mergeSort();
        
        mergeSort(std::string fileType, int size, std::vector<int> &numbers);
        void mergeVector(std::vector<int> &numbers, int low, int middle, int high, int size);
        void mergeSolve(std::vector<int> &numbers, int low, int high, int size);
        void doSort(std::vector<int> &numbers, int size);
        void writeFile(std::vector<int> &numbers);
        
};
