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


void MergeSort::writeFile(std::vector<int> &numbers){
    // Made a 2d vector so writing to file is easier to read
    std::vector<std::vector<int>> final;
	
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
	
    //Create and write of file
    std::ofstream outFile("sortednumbers.txt");
    // Nested for loop to write final results
    for(int i = 0; i < final.size(); i++){
	    for(int j = 0; j < final[0].size(); j++){
        	outFile << final[i][j] << " ";
    	    }
	    outFile << "\n";
	}
}


void MergeSort::mergeVector(std::vector<int> &numbers, int low, int middle, int high, int size){
    int newLow = middle - low + 1;
    int newHigh = high - middle;
	
    std::vector<int> lowVec;
    std::vector<int> highVec;
	    
    for(int i = 0; i < newLow; i++){
	    lowVec.push_back(numbers[low + i]);
    }
	
    for(int j = 0; j < newHigh; j++){
	    highVec.push_back(numbers[middle + 1 + j]);
    }
    
    int a = 0;
    int b = 0;
    int c = low;
	    
	while (a <= newLow and b <= newHigh){
		if (lowVec[a] <= highVec[b]) {
			numbers[c] = lowVec[a];
			a++;
		}
		else {
			numbers[c] = highVec[b];
			b++;
		}
	  c++;
	}

	while (a <= newLow){
		numbers[c] = lowVec[a];
		a++;
		c++;
	}
	while(b < newHigh){
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

void MergeSort::doTheSort(std::vector<int> &numbers, int size){
    int high = size - 1;
    int low = 0;
    mergeSolve(numbers, low, high, size);
}
    
