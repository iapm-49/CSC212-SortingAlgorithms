#include <iostream>
#include <string>
#include <vector>

class MergeSort {
    public:
        //class constructor
        MergeSort();
        //Merge sorting functions that carry out functions throughout mergeSort
        MergeSort(std::string fileType, int size, std::vector<int> &numbers);
        //Merge Vector that holds the vectors used within program
        void mergeVector(std::vector<int> &numbers, int low, int middle, int high, int size);
        //Merge Solve that solves the sorting and placement of lists
        void mergeSolve(std::vector<int> &numbers, int low, int high, int size);
        // doTheSort that carries out the sorting algorithm
        void doTheSort(std::vector<int> &numbers, int size);
        // Writes code to file
        void writeFile(std::vector<int> &numbers);
        
};
