#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include "mergeSort.h"

//This first function reads from the file and assigns it into an vector
MergeSort::MergeSort(std::string fileType, int size, std::vector<int> &numbers){
    //Reads from the file into an vector and find's it's size
    std::ifstream file(fileType);
    if(file){
        int value;
        while(file>>value){
            numbers.push_back(value);
        }
    }
}

// Mergesort function that splits the list of elements into two that are ordered and compressed into a large sorted list
void MergeSort::mergeVector(std::vector<int> &numbers, int low, int middle, int high, int size){
    
    // newLow and newHigh variables that are the current set values to test against
    int newLow = middle - low + 1;
    int newHigh = high - middle;
	
	// Temporary vectors that hold the upper and lower list to compare
    std::vector<int> lowVec;
    std::vector<int> highVec;
	
	// While i is less than newLow, pushback numbers with low plus i
    for(int i = 0; i < newLow; i++){
	    lowVec.push_back(numbers[low + i]);
    }
	// While i is less than newHigh, pushback numbers with middle + j and 1
    for(int j = 0; j < newHigh; j++){
	    highVec.push_back(numbers[middle + 1 + j]);
    }
    
    // Variables to be used in the comparison process
    int a = 0;
    int b = 0;
    int c = low;
	
	// While a is less than newLow and b is less than newHigh
	while (a < newLow and b < newHigh){
	    // Equal numbers at element c to lowVec at element a, while incrementing a
		if (lowVec[a] <= highVec[b]) {
			numbers[c] = lowVec[a];
			a++;
		}
		// if else, set numbers c to highvec at element b and increment b
		else {
			numbers[c] = highVec[b];
			b++;
		}
	  c++;
	}
    
    //While a is less than newLow
	while (a < newLow){
	    //Set numbers at element c to lowVec at element a, increment a and c
		numbers[c] = lowVec[a];
		a++;
		c++;
	}
	//While b is less than newHigh
	while(b < newHigh){
	    //Set numbers at element c to lowVec at element a, increment b and c
		numbers[c] = highVec[b];
		b++;
		c++;
	}
}
		

// Recursive function that goes into itself finding a new low to compare itself into
void MergeSort::mergeSolve(std::vector<int> &numbers, int low, int high, int size){
    if(low < high){
        int middle = low + (high - low) / 2;
        mergeSolve(numbers, low, middle, size);
        mergeSolve(numbers, middle + 1, high, size);
        mergeVector(numbers, low, middle, high, size);
    }
    return;
}

// The Mergesort function that passed in parameters, intiates the merge sort process
void MergeSort::doTheSort(std::vector<int> &numbers, int size){
    int high = size - 1;
    int low = 0;
    mergeSolve(numbers, low, high, size);
}
    
void MergeSort::writeFile(std::vector<int> &numbers){
    // Made a 2d vector so writing to file is easier to read
    std::vector<std::vector<int> > final;
	
    // Row size dependent on size of file
    int rowSize = numbers.size()/10;
	
    // Column size is always 10
    int colSize = 10;
	
    // Nested for loop transforms 1d "numbers" vector into 2d "final" vector
    for(int i = 0; i < rowSize; i++){
	    std::vector<int> row;
	    for(int j = 0; j < colSize; j++){
		    row.push_back(numbers[(i * 10) + j]);
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
