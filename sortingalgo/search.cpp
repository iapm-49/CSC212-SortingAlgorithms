#include <iostream>

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