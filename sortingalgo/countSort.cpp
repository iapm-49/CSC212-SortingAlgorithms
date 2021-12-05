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
    //should change to be able to pick outputfile name
    //idea: be able to write out to file in a 2d vector
    std::ofstream outFile("sortednumbers.txt");
    for(int i = 0; i< numbers.size(); i++){
        outFile << numbers[i]<<" ";
        
    }
}


void CountSort::doTheSort(std::vector<int> &numbers, int size){
    std::vector<int> B(numbers.size(), 0);
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

