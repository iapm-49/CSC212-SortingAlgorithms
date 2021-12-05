#include <iostream>
#include <string>
#include <vector>

class QuickSort {
    public:
        //class constructor
        QuickSort();

        //class call
        QuickSort(std::string fileType, int size, std::vector<int> &numbers);
        
        //swap function
        void swapping(int &numA, int &numB);

        //function to partition & sort the values
        void partition(std::vector<int> &numbers, int lo, int hi);
        
        //sorting function
        void doTheSort(std::vector<int> &numbers, int lo, int hi);
        
        //write file
        void writeFile(std::vector<int> &numbers);

};
