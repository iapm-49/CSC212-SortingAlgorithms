#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include "countSort.h"



CountSort::CountSort(std::string fileType, int size, std::vector<int> &numbers){
//reading the file into an array and finding the size
    std::ifstream file(fileType);
    if(file){
        int value;
        while(file>>value){
            numbers.push_back(value);
        }
    }

}

void CountSort::writeFile(std::vector<int> &numbers){
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


void CountSort::doTheSort(std::vector<int> &numbers, int size){
    //another vector to 
    std::vector<int> B(numbers.size(), 0);
        //this vector stores the occurences of each unique element
        std::vector<int> count(numbers.size()+1, 0);
        for(int i=0; i<numbers.size(); i++)
            count[numbers[i]]++;
        for(int i=1; i<=numbers.size(); i++)
            count[i] += count[i-1];
        for(int i=0; i<numbers.size(); i++)
        {
            B[count[numbers[i]] - 1] = numbers[i];
            count[numbers[i]]--;
        }
        for(int i=0; i<numbers.size(); i++)
            numbers[i] = B[i];
}

