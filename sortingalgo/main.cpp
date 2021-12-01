#include <iostream>
#include <string>
#include <iomanip>
#include "insertionSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "countSort.h"

int main() {
    int algorithmFileType;
    int textFileType;
    int fileProperty;
    
    std::cout<< "Welcome to our Algorithm Project, please pick your Sorting Algorithm:" << "\n";
    std::cout<< "1 = Insertion Sort" << "           " << "2 = Merge Sort" << "\n" << "3 = Quick Sort" << "               " << "4 = Count Sort" << "\n" << "Your Selection: ";
    std::cin>> algorithmFileType;
    
    std::cout<< "\n" << "Now pick what size file you want:" << "\n";
    std::cout<< "1 = Small File Size(100)" << "               " << "2 = Medium File Size(500)" << "\n" << "3 = large File Size(1500)" << "              " << "4 = Extra Large File Size(8000)(not for the faint of heart)" << "\n" << "Your Selection: ";
    std::cin>> textFileType;
    
    std::cout<< "\n" "Now select the file's property:" << "\n";
    std::cout<< "1 = Sorted" << "           " << "2 = Reversed" << "\n" << "3 = Random" << "           " << "4 = Partially Sorted" << "\n" << "Your Selection: ";
    std::cin>> fileProperty;

    time_t start, end;

    time(&start);

    if(algorithmFileType == 1){
        if(textFileType == 1){
            if(fileProperty == 1){
                
                InsertionSort insertionSort = InsertionSort("smallSorted.txt", 100);
                insertionSort.doTheSort();
            }
            else if(fileProperty == 2){
                
            }
            else if(fileProperty == 3){

            }
            else{

            }
        }
        else if(textFileType == 2){

        }
        else if(textFileType == 3){

        }
        else if(textFileType == 4){

        }
    }
    else if(algorithmFileType == 2){
        MergeSort mergeSort = MergeSort();
    }
    else if(algorithmFileType == 3){
        QuickSort quickSort = QuickSort();
    }
    else if(algorithmFileType == 4){
        CountSort countSort = CountSort();
    }
    

    time(&end);

    double time_taken = double(end - start);

    std::cout << "Time taken by program is : " << std::fixed
         << time_taken << std::setprecision(5);
    std::cout << " sec " << std::endl;

}
