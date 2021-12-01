#include <iostream>
#include <iomanip>
#include "insertionSort.h"

void insertionSort(int array[], int size){
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

int main(){

    int array [5] = { 16, 2, 77, 40, 12071}; 

    time_t start, end;

    time(&start);

    insertionSort(array, 5);

    time(&end);

    double time_taken = double(end - start);

    std::cout << "Time taken by program is : " << std::fixed
         << time_taken << std::setprecision(5);
    std::cout << " sec " << std::endl;

}