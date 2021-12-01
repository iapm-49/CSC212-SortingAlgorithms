#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include "insertionSort.h"

InsertionSort::InsertionSort(){

}

InsertionSort::InsertionSort(std::string fileType){
//reading the file into an array and finding the size

}

void doTheSort(int array[], int size){
    for(int i = 0; i<size; i++){
        int current = array[i];
        int j = i-1;

        while(current<array[j] && j>=0){
            array[j+1] = array[j];
            --j;
        }
        array[j+1] = current;
    }
}
