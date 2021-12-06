#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include "insertionSort.h"


InsertionSort::InsertionSort(std::string fileType, int size, std::vector<int> &numbers){
    //reading the selected file into a vector
    std::ifstream file(fileType);
    if(file){
        int value;
        while(file>>value){
            numbers.push_back(value);
        }
    }

}

void InsertionSort::writeFile(std::vector<int> &numbers){
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


void InsertionSort::doTheSort(std::vector<int> &numbers, int size){
    //i holds a value in the vector, j holds the value next to i, temp serves as the key
    int i, j, temp;
    //iterate from numbers[1] to numbers[size] over the vector
    for(i = 1; i<size; i++){
        j = i;
        temp = numbers[i];
        //move elements that are greater than temp to one position greater than their current position
        while(j>0 && temp<numbers[j-1]){
            numbers[j]=numbers[j-1];
            j--;
        }
        numbers[j]=temp;
    }
}
