#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include "quickSort.h"

QuickSort::QuickSort(std::string fileType, int size, std::vector<int> &numbers){
    //reading the file into the numbers vector
    std::ifstream file(fileType);
    
    if (file){
        int value;
        while(file>>value){
            numbers.push_back(value);
        }
    }
    
}

//swaps values
void swapping(int &numA, int &numB){
    int temp = numA;
    numA = numB;
    numB = temp;
}

//put the pivot value in the correct position, with less than and greater than
//sections on each side (which are still not sorted), creating a partition
void QuickSort::partition(std::vector<int> &numbers, int lo, int hi){
    //always picking last element as pivot
    int pivot = numbers[hi];
  
    //starting point
    int i = (low - 1);
  
    //traverse through the list of numbers
    for (int j = lo; j <= (high - 1); j++){
      
        //if the number is greater than the value of the pivot, increment i and swap
        if (numbers[j] < pivot){
            //increment i
            i++;
            
            //call swap function
            swapping(numbers[i], numbers[j]);
        }
    }
    //call swap function for i + 1 and the pivot
    swapping(numbers[i + 1], numbers[high]);
    
    //returns index of partition (where the list changes from less than the pivot
    //to greater than the pivot)
    return (i + 1)
}

//actually sorting the two sides of the partition
void QuickSort::doTheSort(std::vector<int> &numbers, int lo, int hi){
    
    if (lo < hi){
        //get index of partition
        int partitionIndex = partition(numbers, lo, hi);
        
        //recursively call this function to separately sort both sides of the partition
        doTheSort(numbers, lo, partitionIndex - 1);
        doTheSort(numbers, partitionIndex + 1, high);
    }
  
}

void QuickSort::writeFile(std::vector<int> &numbers){
    
    std::ofstream outFile("sortednumbers.txt")
    
    for(int i = 0; i < numbers.size(); i++){
        outFile << numbers[i] << " ";
    }
    
}
