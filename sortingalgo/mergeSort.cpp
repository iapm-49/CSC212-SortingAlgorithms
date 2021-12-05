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
    //should change to be able to pick outputfile name
    
    //idea: be able to write out to file in a 2d vector
    std::ofstream outFile("sortednumbers.txt");
    for(int i = 0; i < numbers.size(); i++){
        outFile << numbers[i]<<" ";
    }
}

void mergeVector(std::vector<int> &numbers, int high, int middle, int low, int size){
    int a = low;
    int b = middle + 1;
    std::vector<int> tempVec;
    
	while (a <= middle and b <= size - 1) {

		if (numbers[a] <= numbers[b]) {
			tempVec.push_back(numbers[a]);
			a++;
		}
		else {
			tempVec.push_back(numbers[b]);
			b++;
		}
	}

	while (a <= middle) {
		tempVec.push_back(numbers[a]);
		a++;
	}

	while (b <= size - 1) {
		tempVec.push_back(numbers[b]);
		b++;
	}
	for (int i = a; i <= size - 1; ++i){
		numbers[a] = tempVec[a - middle];
    }
}

// Recursive function that goes into itself finding a new low to compare itself into
void mergeSolve(std::vector<int> &numbers, int high, int low, int size){
    if(low < high){
        int middle = (low + high) / 2;
        mergeSolve(numbers, low, middle, size);
        mergeSolve(numbers, middle + 1, high, size);
        
        mergeVector(numbers, high, middle, low, size);
    }
    return;
}

void MergeSort::doTheSort(std::vector<int> &numbers, int size){
    int high = size - 1;
    int low = 0;
    mergeSolve(numbers, high, low, size);
}
    
