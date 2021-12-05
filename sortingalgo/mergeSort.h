#include <iostream>
#include <string>
#include <vector>

class mergeSort {
    public:
        //class constructor
        mergeSort();
        
        mergeSort(std::string fileType, int size, std::vector<int> &numbers);
        void doSort(std::vector<int> &numbers, int size);
        void writeFile(std::vector<int> &numbers);
        
};
