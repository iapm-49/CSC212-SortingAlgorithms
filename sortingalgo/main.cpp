#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "insertionSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "countSort.h"
#include <stdexcept> 
#include "time.h"


int main() {
    //initiating variables
    
    //type of sorting algorithm
    int algorithmFileType;
    
    //size of text file (1000, 10000, 100000)
    int textFileType;
    
    //how the values in the text file are organized (sorted, reversed, random, partially sorted)
    int fileProperty;
    
    //vector of numbers we are sorting
    std::vector<int> numbers;
    
    //answer user submits when asked if the questions should continue
    int userAnswer;
    
    //variable to determine whether the questions will continue to be asked to the user
    bool keepGoing = true;
    
    //loop to check if keepGoing is true after all of the questions
    while (keepGoing == true){
    
        //user selections, output and input
        std::cout<< "Welcome to our Algorithm Project, please pick your Sorting Algorithm:" << "\n";
        std::cout<< "1 = Insertion Sort" << "           " << "2 = Merge Sort" << "\n" << "3 = Quick Sort" << "               " << "4 = Count Sort" << "\n" << "Your Selection: ";

        //exception handling for first input
        while (std::cin>> algorithmFileType){
            if (algorithmFileType == 1 || algorithmFileType == 2 || algorithmFileType == 3 || algorithmFileType == 4){
                break;
            }
            else {
                std::cout<< "Input is out of range. Try again!" << "\n";
            }
        }

        std::cout<< "\n" << "Now pick what size file you want:" << "\n";
        std::cout<< "1 = Small File Size(1000)" << "               " << "2 = Medium File Size(10000)" << "\n" << "3 = Large File Size(100000)" << "\n" << "Your Selection: ";

        //exception handling for second input
        while (std::cin>> textFileType){
            if (textFileType == 1 || textFileType == 2 || textFileType == 3){
                break;
            }
            else {
                std::cout<< "Input is out of range. Try again!" << "\n";
            }
        }

        std::cout<< "\n" "Now select the file's property:" << "\n";
        std::cout<< "1 = Sorted" << "           " << "2 = Reversed" << "\n" << "3 = Random" << "           " << "4 = Partially Sorted" << "\n" << "Your Selection: ";

        //exception handling for third input
        while (std::cin>> fileProperty){
            if (fileProperty == 1 || fileProperty == 2 || fileProperty == 3 || fileProperty == 4){
                break;
            }
            else {
                std::cout<< "Input is out of range. Try again!" << "\n";
            }
        }

        //declaring start and end 
        clock_t start,end;

        //start time count
        start = clock();

        //if user selects INSERTION SORT
        if(algorithmFileType == 1){

            //if user selects SMALL FILE SIZE (1000)
            if(textFileType == 1){

                //if user selects SORTED
                if(fileProperty == 1){
                    InsertionSort insertionSort = InsertionSort("smallSorted.txt", 1000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    InsertionSort insertionSort = InsertionSort("smallReversed.txt", 1000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    InsertionSort insertionSort = InsertionSort("smallRandom.txt", 1000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    InsertionSort insertionSort = InsertionSort("smallPSorted.txt", 1000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }  
            }

            //if user selects MEDIUM FILE SIZE (10000)
            else if(textFileType == 2){

                //if user selects SORTED
                if(fileProperty == 1){
                    InsertionSort insertionSort = InsertionSort("mediumSorted.txt", 10000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    InsertionSort insertionSort = InsertionSort("mediumReversed.txt", 10000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    InsertionSort insertionSort = InsertionSort("mediumRandom.txt", 10000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    InsertionSort insertionSort = InsertionSort("mediumPSorted.txt", 10000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }  
            }

            //if user selects LARGE FILE SIZE (100000)
            else if(textFileType == 3){

                //if user selects SORTED
                if(fileProperty == 1){
                    InsertionSort insertionSort = InsertionSort("largeSorted.txt", 100000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    InsertionSort insertionSort = InsertionSort("largeReversed.txt", 100000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    InsertionSort insertionSort = InsertionSort("largeRandom.txt", 100000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    InsertionSort insertionSort = InsertionSort("largePSorted.txt", 100000, numbers);
                    insertionSort.doTheSort(numbers, numbers.size());
                    insertionSort.writeFile(numbers);
                }  
            }

        }

        //if user selects MERGE SORT
        else if(algorithmFileType == 2){

            //if user selects SMALL FILE SIZE (1000)
            if(textFileType == 1){

                //if user selects SORTED
                if(fileProperty == 1){
                    MergeSort mergeSort = MergeSort("smallSorted.txt", 1000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    MergeSort mergeSort = MergeSort("smallReversed.txt", 1000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    MergeSort mergeSort = MergeSort("smallRandom.txt", 1000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    MergeSort mergeSort = MergeSort("smallPSorted.txt", 1000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }  
            }

            //if user selects MEDIUM FILE SIZE (10000)
            else if(textFileType == 2){

                //if user selects SORTED
                if(fileProperty == 1){
                    MergeSort mergeSort = MergeSort("mediumSorted.txt", 10000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    MergeSort mergeSort = MergeSort("mediumReversed.txt", 10000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    MergeSort mergeSort = MergeSort("mediumRandom.txt", 10000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    MergeSort mergeSort = MergeSort("mediumPSorted.txt", 10000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }  
            }

            //if user selects LARGE FILE SIZE (100000)
            else if(textFileType == 3){

                //if user selects SORTED
                if(fileProperty == 1){
                    MergeSort mergeSort = MergeSort("largeSorted.txt", 100000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    MergeSort mergeSort = MergeSort("largeReversed.txt", 100000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    MergeSort mergeSort = MergeSort("largeRandom.txt", 100000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    MergeSort mergeSort = MergeSort("largePSorted.txt", 100000, numbers);
                    mergeSort.doTheSort(numbers, numbers.size());
                    mergeSort.writeFile(numbers);
                }  
            }

        }

        //if user selects QUICK SORT
        else if(algorithmFileType == 3){

            //initialize lo
            int lo = 0;

            //if user selects SMALL FILE SIZE (1000)
            if(textFileType == 1){

                //initialize hi for small
                int hi = (1000 - 1);

                //if user selects SORTED
                if(fileProperty == 1){
                    QuickSort quickSort = QuickSort("smallSorted.txt", 1000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    QuickSort quickSort = QuickSort("smallReversed.txt", 1000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    QuickSort quickSort = QuickSort("smallRandom.txt", 1000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    QuickSort quickSort = QuickSort("smallPSorted.txt", 1000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }  
            }

            //if user selects MEDIUM FILE SIZE (10000)
            else if(textFileType == 2){

                //initialize hi for medium
                int hi = (10000 - 1);

                //if user selects SORTED
                if(fileProperty == 1){
                    QuickSort quickSort = QuickSort("mediumSorted.txt", 10000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    QuickSort quickSort = QuickSort("mediumReversed.txt", 10000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    QuickSort quickSort = QuickSort("mediumRandom.txt", 10000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    QuickSort quickSort = QuickSort("mediumPSorted.txt", 10000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }  
            }

            //if user selects LARGE FILE SIZE (100000)
            else if(textFileType == 3){

                //initialize hi for large
                int hi = (100000 - 1);

                //if user selects SORTED
                if(fileProperty == 1){
                    QuickSort quickSort = QuickSort("largeSorted.txt", 100000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    QuickSort quickSort = QuickSort("largeReversed.txt", 100000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    QuickSort quickSort = QuickSort("largeRandom.txt", 100000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    QuickSort quickSort = QuickSort("largePSorted.txt", 100000, numbers);
                    quickSort.doTheSort(numbers, lo, hi);
                    quickSort.writeFile(numbers);
                }  
            }

        }

        //if user selects COUNT SORT
        else if(algorithmFileType == 4){

            //if user selects SMALL FILE SIZE (1000)
            if(textFileType == 1){

                //if user selects SORTED
                if(fileProperty == 1){
                    CountSort countSort = CountSort("smallSorted.txt", 1000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    CountSort countSort = CountSort("smallReversed.txt", 1000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    CountSort countSort = CountSort("smallRandom.txt", 1000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    CountSort countSort = CountSort("smallPSorted.txt", 1000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }  
            }

            //if user selects MEDIUM FILE SIZE (10000)
            else if(textFileType == 2){

                //if user selects SORTED
                if(fileProperty == 1){
                    CountSort countSort = CountSort("mediumSorted.txt", 10000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    CountSort countSort = CountSort("mediumReversed.txt", 10000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    CountSort countSort = CountSort("mediumRandom.txt", 10000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    CountSort countSort = CountSort("mediumPSorted.txt", 10000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }  
            }

            //if user selects LARGE FILE SIZE (100000)
            else if(textFileType == 3){

                //if user selects SORTED
                if(fileProperty == 1){
                    CountSort countSort = CountSort("largeSorted.txt", 100000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }

                //if user selects REVERSED
                else if(fileProperty == 2){
                    CountSort countSort = CountSort("largeReversed.txt", 100000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }

                //if user selects RANDOM
                else if(fileProperty == 3){
                    CountSort countSort = CountSort("largeRandom.txt", 100000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }

                //if user selects PARTIALLY SORTED
                else{
                    CountSort countSort = CountSort("largePSorted.txt", 100000, numbers);
                    countSort.doTheSort(numbers, numbers.size());
                    countSort.writeFile(numbers);
                }  
            }

        }

        //stop time count
        end=clock();

        //finds time taken
        double time_taken = double(end - start)/ double(CLOCKS_PER_SEC);

        //print out time taken
        std::cout << "Time taken by program is : " << std::fixed << time_taken << std::setprecision(5);
        std::cout << " sec " << std::endl;
        
        //do another sort?
        std::cout << "Would you like to try another sort? 1 for YES, 2 for NO:" << "\n";
        
        //exception handling for user's response
        while (std::cin>> userAnswer){
            if (userAnswer == 1 || userAnswer == 2){
                break;
            }
            else {
                std::cout<< "Input is not an option. Try again!" << "\n";
            }
        }
        
        //if user does not want to continue, break while loop
        if (userAnswer == 1){
            //continue loop
        }
        else if (userAnswer == 2){
            break;
        }
    }

}
