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
void QuickSort::swapping(int &numA, int &numB){
    int temp = numA;
    numA = numB;
    numB = temp;
}

//put the pivot value in the correct position, with less than and greater than
//sections on each side (which are still not sorted), creating a partition
int QuickSort::partition(std::vector<int> &numbers, int lo, int hi){
    //always picking last element as pivot
    int pivot = numbers[hi];
  
    //starting point
    int i = (lo - 1);
  
    //traverse through the list of numbers
    for (int j = lo; j <= (hi - 1); j++){
      
        //if the number is greater than the value of the pivot, increment i and swap
        if (numbers[j] < pivot){
            //increment i
            i++;
            
            //call swap function
            swapping(numbers[i], numbers[j]);
        }
    }
    //call swap function for i + 1 and the pivot
    swapping(numbers[i + 1], numbers[hi]);
    
    //returns index of partition (where the list changes from less than the pivot
    //to greater than the pivot)
    return (i + 1);
}

//actually sorting the two sides of the partition
void QuickSort::doTheSort(std::vector<int> &numbers, int lo, int hi){
    
    if (lo < hi){
        //get index of partition
        int partitionIndex = partition(numbers, lo, hi);
        
        //recursively call this function to separately sort both sides of the partition
        doTheSort(numbers, lo, partitionIndex - 1);
        doTheSort(numbers, partitionIndex + 1, hi);
    }
  
}

void QuickSort::writeFile(std::vector<int> &numbers){
    //made a 2d vector so that write file is easier to read 
    std::vector<std::vector<int> > final;
    //row size dependent on size of file 
    int rowSize = numbers.size()/10;
    //col size is always 10
    int colSize = 10;
    //nested for loop transforms 1d "numbers" vector into 2d "final" vector
    for(int i = 0; i < rowSize; i++){
        std::vector<int> row;
        for (int j = 0; j < colSize; j++){
            row.push_back(numbers[(i*10)+j]);
        }
        final.push_back(row);
    }

    //create and write to file
    std::ofstream outFile("sortednumbers.txt");
    //nested for loop to write final results 
    for(int i = 0; i < final.size(); i++){
        for(int j = 0; j < final[0].size(); j++){
            outFile << final[i][j]<<" ";
        }
        outFile << "\n";
    }
    
}
