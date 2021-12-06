#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "insertionSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "countSort.h"
#include <stdexcept>

int main() {
    //initiating variables
    
    //type of sorting algorithm
    int algorithmFileType;
    
    //size of text file (100, 500, 1500, 8000)
    int textFileType;
    
    //how the values in the text file are organized (sorted, reversed, random, partially sorted)
    int fileProperty;
    
    //vector of numbers we are sorting
    std::vector<int> numbers;
    

    // void checkValidNumber(int input){
    //     if(input>5 || input<1){
    //         throw std::out_of_range("You must enter a valid number. Please try again");
    //     }
    // }

    
    //user selections, output and input
    std::cout<< "Welcome to our Algorithm Project, please pick your Sorting Algorithm:" << "\n";
    std::cout<< "1 = Insertion Sort" << "           " << "2 = Merge Sort" << "\n" << "3 = Quick Sort" << "               " << "4 = Count Sort" << "\n" << "Your Selection: ";
    std::cin>> algorithmFileType;
        
    std::cout<< "\n" << "Now pick what size file you want:" << "\n";
    std::cout<< "1 = Small File Size(100)" << "               " << "2 = Medium File Size(500)" << "\n" << "3 = large File Size(1500)" << "              " << "4 = Extra Large File Size(8000)(not for the faint of heart)" << "\n" << "Your Selection: ";
    std::cin>> textFileType;
        
    std::cout<< "\n" "Now select the file's property:" << "\n";
    std::cout<< "1 = Sorted" << "           " << "2 = Reversed" << "\n" << "3 = Random" << "           " << "4 = Partially Sorted" << "\n" << "Your Selection: ";
    std::cin>> fileProperty;
    
    
    //declaring start and end 
    time_t start, end;
    
    //start time count
    time(&start);
    
    //if user selects INSERTION SORT
    if(algorithmFileType == 1){
        
        //if user selects SMALL FILE SIZE (100)
        if(textFileType == 1){
            
            //if user selects SORTED
            if(fileProperty == 1){
                InsertionSort insertionSort = InsertionSort("smallSorted.txt", 100, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                InsertionSort insertionSort = InsertionSort("smallReversed.txt", 100, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                InsertionSort insertionSort = InsertionSort("smallRandom.txt", 100, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                InsertionSort insertionSort = InsertionSort("smallPSorted.txt", 100, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }  
        }
        
        //if user selects MEDIUM FILE SIZE (500)
        else if(textFileType == 2){
            
            //if user selects SORTED
            if(fileProperty == 1){
                InsertionSort insertionSort = InsertionSort("mediumSorted.txt", 500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                InsertionSort insertionSort = InsertionSort("mediumReversed.txt", 500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                InsertionSort insertionSort = InsertionSort("mediumRandom.txt", 500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                InsertionSort insertionSort = InsertionSort("mediumPSorted.txt", 500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }  
        }
        
        //if user selects LARGE FILE SIZE (1500)
        else if(textFileType == 3){
            
            //if user selects SORTED
            if(fileProperty == 1){
                InsertionSort insertionSort = InsertionSort("largeSorted.txt", 1500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                InsertionSort insertionSort = InsertionSort("largeReversed.txt", 1500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                InsertionSort insertionSort = InsertionSort("largeRandom.txt", 1500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                InsertionSort insertionSort = InsertionSort("largePSorted.txt", 1500, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }  
        }
        
        //if user selects EXTRA LARGE FILE SIZE (8000)
        else if(textFileType == 4){
            
            //if user selects SORTED
            if(fileProperty == 1){
                InsertionSort insertionSort = InsertionSort("xlSorted.txt", 8000, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                InsertionSort insertionSort = InsertionSort("xlReversed.txt", 8000, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                InsertionSort insertionSort = InsertionSort("xlRandom.txt", 8000, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                InsertionSort insertionSort = InsertionSort("xlPSorted.txt", 8000, numbers);
                insertionSort.doTheSort(numbers, numbers.size());
                insertionSort.writeFile(numbers);
            }  
        }
    }

    //if user selects MERGE SORT
    else if(algorithmFileType == 2){
        
        //if user selects SMALL FILE SIZE (100)
        if(textFileType == 1){
            
            //if user selects SORTED
            if(fileProperty == 1){
                MergeSort mergeSort = MergeSort("smallSorted.txt", 100, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                MergeSort mergeSort = MergeSort("smallReversed.txt", 100, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                MergeSort mergeSort = MergeSort("smallRandom.txt", 100, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                MergeSort mergeSort = MergeSort("smallPSorted.txt", 100, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }  
        }
        
        //if user selects MEDIUM FILE SIZE (500)
        else if(textFileType == 2){
            
            //if user selects SORTED
            if(fileProperty == 1){
                MergeSort mergeSort = MergeSort("mediumSorted.txt", 500, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                MergeSort mergeSort = MergeSort("mediumReversed.txt", 500, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                MergeSort mergeSort = MergeSort("mediumRandom.txt", 500, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                MergeSort mergeSort = MergeSort("mediumPSorted.txt", 500, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }  
        }
        
        //if user selects LARGE FILE SIZE (1500)
        else if(textFileType == 3){
            
            //if user selects SORTED
            if(fileProperty == 1){
                MergeSort mergeSort = MergeSort("largeSorted.txt", 1500, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                MergeSort mergeSort = MergeSort("largeReversed.txt", 1500, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                MergeSort mergeSort = MergeSort("largeRandom.txt", 1500, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                MergeSort mergeSort = MergeSort("largePSorted.txt", 1500, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }  
        }
        
        //if user selects EXTRA LARGE FILE SIZE (8000)
        else if(textFileType == 4){
            
            //if user selects SORTED
            if(fileProperty == 1){
                MergeSort mergeSort = MergeSort("xlSorted.txt", 8000, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                MergeSort mergeSort = MergeSort("xlReversed.txt", 8000, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                MergeSort mergeSort = MergeSort("xlRandom.txt", 8000, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                MergeSort mergeSort = MergeSort("xlPSorted.txt", 8000, numbers);
                mergeSort.doTheSort(numbers, numbers.size());
                mergeSort.writeFile(numbers);
            }  
        }
    }
    
    //if user selects QUICK SORT
    else if(algorithmFileType == 3){
        
        //initialize lo
        int lo = 0;
        
        //if user selects SMALL FILE SIZE (100)
        if(textFileType == 1){
            
            //initialize hi for small
            int hi = (100 - 1);
            
            //if user selects SORTED
            if(fileProperty == 1){
                QuickSort quickSort = QuickSort("smallSorted.txt", 100, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                QuickSort quickSort = QuickSort("smallReversed.txt", 100, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                QuickSort quickSort = QuickSort("smallRandom.txt", 100, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                QuickSort quickSort = QuickSort("smallPSorted.txt", 100, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }  
        }
        
        //if user selects MEDIUM FILE SIZE (500)
        else if(textFileType == 2){
            
            //initialize hi for medium
            int hi = (500 - 1);
            
            //if user selects SORTED
            if(fileProperty == 1){
                QuickSort quickSort = QuickSort("mediumSorted.txt", 500, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                QuickSort quickSort = QuickSort("mediumReversed.txt", 500, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                QuickSort quickSort = QuickSort("mediumRandom.txt", 500, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                QuickSort quickSort = QuickSort("mediumPSorted.txt", 500, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }  
        }
        
        //if user selects LARGE FILE SIZE (1500)
        else if(textFileType == 3){
            
            //initialize hi for large
            int hi = (1500 - 1);
            
            //if user selects SORTED
            if(fileProperty == 1){
                QuickSort quickSort = QuickSort("largeSorted.txt", 1500, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                QuickSort quickSort = QuickSort("largeReversed.txt", 1500, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                QuickSort quickSort = QuickSort("largeRandom.txt", 1500, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                QuickSort quickSort = QuickSort("largePSorted.txt", 1500, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }  
        }
        
        //if user selects EXTRA LARGE FILE SIZE (8000)
        else if(textFileType == 4){
            
            //initialize hi for extra large
            int hi = (8000 - 1);
            
            //if user selects SORTED
            if(fileProperty == 1){
                QuickSort quickSort = QuickSort("xlSorted.txt", 8000, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                QuickSort quickSort = QuickSort("xlReversed.txt", 8000, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                QuickSort quickSort = QuickSort("xlRandom.txt", 8000, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }
            
            //change these else statements to if filePoperty == 4 so we cannot have extra numbers (create error message for
            //numbers other than 1-4)
            //if user selects PARTIALLY SORTED
            else{
                QuickSort quickSort = QuickSort("xlPSorted.txt", 8000, numbers);
                quickSort.doTheSort(numbers, lo, hi);
                quickSort.writeFile(numbers);
            }  
        }
    }
    
    //if user selects COUNT SORT
    else if(algorithmFileType == 4){
        
        //if user selects SMALL FILE SIZE (100)
        if(textFileType == 1){
            
            //if user selects SORTED
            if(fileProperty == 1){
                CountSort countSort = CountSort("smallSorted.txt", 100, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                CountSort countSort = CountSort("smallReversed.txt", 100, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                CountSort countSort = CountSort("smallRandom.txt", 100, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                CountSort countSort = CountSort("smallPSorted.txt", 100, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }  
        }
        
        //if user selects MEDIUM FILE SIZE (500)
        else if(textFileType == 2){
            
            //if user selects SORTED
            if(fileProperty == 1){
                CountSort countSort = CountSort("mediumSorted.txt", 500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                CountSort countSort = CountSort("mediumReversed.txt", 500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                CountSort countSort = CountSort("mediumRandom.txt", 500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                CountSort countSort = CountSort("mediumPSorted.txt", 500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }  
        }
        
        //if user selects LARGE FILE SIZE (1500)
        else if(textFileType == 3){
            
            //if user selects SORTED
            if(fileProperty == 1){
                CountSort countSort = CountSort("largeSorted.txt", 1500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                CountSort countSort = CountSort("largeReversed.txt", 1500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                CountSort countSort = CountSort("largeRandom.txt", 1500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                CountSort countSort = CountSort("largePSorted.txt", 1500, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }  
        }
        
        //if user selects EXTRA LARGE FILE SIZE (8000)
        else if(textFileType == 4){
            
            //if user selects SORTED
            if(fileProperty == 1){
                CountSort countSort = CountSort("xlSorted.txt", 8000, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects REVERSED
            else if(fileProperty == 2){
                CountSort countSort = CountSort("xlReversed.txt", 8000, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects RANDOM
            else if(fileProperty == 3){
                CountSort countSort = CountSort("xlRandom.txt", 8000, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }
            
            //if user selects PARTIALLY SORTED
            else{
                CountSort countSort = CountSort("xlPSorted.txt", 8000, numbers);
                countSort.doTheSort(numbers, numbers.size());
                countSort.writeFile(numbers);
            }  
        }
    }
    
    //stop time count
    time(&end);
    
    //finds time taken
    double time_taken = double(end - start);
    
    //print out time taken
    std::cout << "Time taken by program is : " << std::fixed
         << time_taken << std::setprecision(5);
    std::cout << " sec " << std::endl;

}
