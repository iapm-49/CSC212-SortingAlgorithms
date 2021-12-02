#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
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

    std::vector<int> numbers;

    time_t start, end;

    time(&start);

    if(algorithmFileType == 1){
        if(textFileType == 1){
            if(fileProperty == 1){
                InsertionSort insertionSort = InsertionSort("smallSorted.txt", 100, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else if(fileProperty == 2){
                InsertionSort insertionSort = InsertionSort("smallReversed.txt", 100, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else if(fileProperty == 3){
                InsertionSort insertionSort = InsertionSort("smallRandom.txt", 100, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else{
                InsertionSort insertionSort = InsertionSort("smallPSorted.txt", 100, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }  
        }
        else if(textFileType == 2){
            if(fileProperty == 1){
                InsertionSort insertionSort = InsertionSort("mediumSorted.txt", 500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else if(fileProperty == 2){
                InsertionSort insertionSort = InsertionSort("mediumReversed.txt", 500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else if(fileProperty == 3){
                InsertionSort insertionSort = InsertionSort("mediumRandom.txt", 500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else{
                InsertionSort insertionSort = InsertionSort("mediumPSorted.txt", 500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }  
        }
        else if(textFileType == 3){
            if(fileProperty == 1){
                InsertionSort insertionSort = InsertionSort("largeSorted.txt", 1500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else if(fileProperty == 2){
                InsertionSort insertionSort = InsertionSort("largeReversed.txt", 1500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else if(fileProperty == 3){
                InsertionSort insertionSort = InsertionSort("largeRandom.txt", 1500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else{
                InsertionSort insertionSort = InsertionSort("largePSorted.txt", 1500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }  
        }
        else if(textFileType == 4){
            if(fileProperty == 1){
                InsertionSort insertionSort = InsertionSort("xlSorted.txt", 8000, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else if(fileProperty == 2){
                InsertionSort insertionSort = InsertionSort("xlReversed.txt", 8000, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else if(fileProperty == 3){
                InsertionSort insertionSort = InsertionSort("xlRandom.txt", 8000, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            else{
                InsertionSort insertionSort = InsertionSort("xlPSorted.txt", 8000, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }  
        }
    }
    else if(algorithmFileType == 2){
        MergeSort mergeSort = MergeSort();
    }
    
    //if user selects QUICK SORT
    else if(algorithmFileType == 3){
        
        //if user selects SMALL FILE SIZE (100)
        if(textFileType == 1){
            
            //if user selects SORTED
            if(fileProperty == 1){
                QuickSort quickSort = QuickSort("smallSorted.txt", 100, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                QuickSort quickSort = QuickSort("smallReversed.txt", 100, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                QuickSort quickSort = QuickSort("smallRandom.txt", 100, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                QuickSort quickSort = QuickSort("smallPSorted.txt", 100, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }  
        }
        
        //if user selects MEDIUM FILE SIZE (500)
        else if(textFileType == 2){
            
            //if user selects SORTED
            if(fileProperty == 1){
                QuickSort quickSort = QuickSort("mediumSorted.txt", 500, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                QuickSort quickSort = QuickSort("mediumReversed.txt", 500, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                QuickSort quickSort = QuickSort("mediumRandom.txt", 500, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                QuickSort quickSort = QuickSort("mediumPSorted.txt", 500, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }  
        }
        
        //if user selects LARGE FILE SIZE (1500)
        else if(textFileType == 3){
            
            //if user selects SORTED
            if(fileProperty == 1){
                QuickSort quickSort = QuickSort("largeSorted.txt", 1500, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                QuickSort quickSort = QuickSort("largeReversed.txt", 1500, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                QuickSort quickSort = QuickSort("largeRandom.txt", 1500, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                QuickSort quickSort = QuickSort("largePSorted.txt", 1500, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }  
        }
        
        //if user selects EXTRA LARGE FILE SIZE (8000)
        else if(textFileType == 4){
            
            //if user selects SORTED
            if(fileProperty == 1){
                QuickSort quickSort = QuickSort("xlSorted.txt", 8000, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                QuickSort quickSort = QuickSort("xlReversed.txt", 8000, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                QuickSort quickSort = QuickSort("xlRandom.txt", 8000, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }
            
            //change these else statements to if filePoperty == 4 so we cannot have extra numbers (create error message for
            //numbers other than 1-4)
            //if user selects PARTIALLY SORTED
            else{
                QuickSort quickSort = QuickSort("xlPSorted.txt", 8000, numbers);
                quickSort.doTheSort(numbers, numbers.size());
                quickSort.writeFile(numbers);
            }  
        }
    }
    
    else if(algorithmFileType == 4){
        if(textFileType == 1){
            if(fileProperty == 1){
                CountSort countSort = CountSort("smallSorted.txt", 100, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else if(fileProperty == 2){
                CountSort countSort = CountSort("smallReversed.txt", 100, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else if(fileProperty == 3){
                CountSort countSort = CountSort("smallRandom.txt", 100, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else{
                CountSort countSort = CountSort("smallPSorted.txt", 100, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }  
        }
        else if(textFileType == 2){
            if(fileProperty == 1){
                CountSort countSort = CountSort("mediumSorted.txt", 500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else if(fileProperty == 2){
                CountSort countSort = CountSort("mediumReversed.txt", 500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else if(fileProperty == 3){
                CountSort countSort = CountSort("mediumRandom.txt", 500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else{
                CountSort countSort = CountSort("mediumPSorted.txt", 500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }  
        }
        else if(textFileType == 3){
            if(fileProperty == 1){
                CountSort countSort = CountSort("largeSorted.txt", 1500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else if(fileProperty == 2){
                CountSort countSort = CountSort("largeReversed.txt", 1500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else if(fileProperty == 3){
                CountSort countSort = CountSort("largeRandom.txt", 1500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else{
                CountSort countSort = CountSort("largePSorted.txt", 1500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }  
        }
        else if(textFileType == 4){
            if(fileProperty == 1){
                CountSort countSort = CountSort("xlSorted.txt", 8000, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else if(fileProperty == 2){
                CountSort countSort = CountSort("xlReversed.txt", 8000, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else if(fileProperty == 3){
                CountSort countSort = CountSort("xlRandom.txt", 8000, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            else{
                CountSort countSort = CountSort("xlPSorted.txt", 8000, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }  
        }
    }
    

    time(&end);

    double time_taken = double(end - start);

    std::cout << "Time taken by program is : " << std::fixed
         << time_taken << std::setprecision(5);
    std::cout << " sec " << std::endl;

}
