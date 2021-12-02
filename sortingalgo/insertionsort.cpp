#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include "insertionSort.h"



InsertionSort::InsertionSort(std::string fileType, int size, std::vector<int> &numbers){
//reading the file into an array and finding the size
    std::ifstream file(fileType);
    if(file){
        int value;
        while(file>>value){
            numbers.push_back(value);
        }
    }

}

void InsertionSort::writeFile(std::vector<int> &numbers){
    //should change to be able to pick outputfile name
    //idea: be able to write out to file in a 2d vector
    std::ofstream outFile("sortednumbers.txt");
    for(int i = 0; i< numbers.size(); i++){
        outFile << numbers[i]<<" ";
    }
}


void InsertionSort::doTheSort(std::vector<int> &numbers, int size){
    int i, j, temp;
    for(i = 1; i<size; i++){
        j = i;
        temp = numbers[i];
        while(j>0 && temp<numbers[j-1]){
            numbers[j]=numbers[j-1];
            j--;
        }
        numbers[j]=temp;
    }
}
