# CSC212-SortingAlgorithms

Welcome to our final project repository! This project was completed by Michaela Healy, Isabella Martinez, and Noah Santagata in the course CSC 212 in the Fall of 2021. In completing this project, we implemented four different sorting algorithms while also benchmarking their runtimes and analyzing the ways in which they work.

Presented here are explanations of each of the algorithms we implemented followed by how to properly use our program.

1. Algorithms
   - Insertion Sort
   - Merge Sort 
   - Quick Sort
   - Counting Sort
2. Directions
   - Downloads
   - User Input
3. Acknowledgments


# Part 1. Algorithms

# Insertion Sort
  Insertion sort is often described similarly to how playing cards are commonly sorted in your hands. The array/list of numbers being sorted is separated into a sorted and an unsorted part. As the values of the array are iterated through, the values that are still in the unsorted part of the array will be placed in their correct positions in the sorted part of the array. 

When sorting an array of size n:
1. Beginning at the first index of the array, compare this element to the next element in the array (n, n will change as it iterates).
2. Compare the element at index n to the element directly before it.
3. If the element at index n is less than the element directly before it, continue to compare it to the elements before that one, until it is no longer smaller than the element it is being compared to.
4. Move up the elements that were greater than the element at index n to make space for the element that was swapped.

4 3 2 10 12 1 5 6

4 3 2 10 12 1 5 6

3 4 2 10 12 1 5 6

2 3 4 10 12 1 5 6

2 3 4 10 12 1 5 6

2 3 4 10 12 1 5 6

1 2 3 4 10 12 5 6

1 2 3 4 5 10 12 6

1 2 3 4 5 6 10 12

https://www.geeksforgeeks.org/insertion-sort/

# Merge Sort

# Quick Sort

# Count Sort

# Part 2. How to Run our Program
Here is a little explanation about how to run our program and what to expect when entering in your input:

# Downloads
   - First, you will need to download all of the files from our "sortingalgo" folder, which includes each of the .cpp and .h files for our four algorithms. You will also need to download each of the .txt files found in the "txtFiles" folder in order to run each unique combination of algorithms, text file sizes, and organization of values in the text files.

# User Input
1. Compile all of the .cpp files appropriately for your choice of IDE.
   - Example: In CS50 IDE, the command would look like: "g++ main.cpp insertionSort.cpp mergeSort.cpp quickSort.cpp countSort.cpp -o main"
2. Run the code using the command ./main, or ./(whatever you chose as a name)
3. The program will then prompt you to enter a number representing a sorting algorithm.
   - 1 = Insertion Sort, 2 = Merge Sort, 3 = Quick Sort, 4 = Count Sort
4. Another prompt will show up, allowing you to choose the size of the file that will be sorted.
   - 1 = Small File Size (1000 values), 2 = Medium File Size (10000 values), 3 = Large File Size (100000 values)
5. A third prompt will now appear, in which you decide the "property" of the file, which can also be described as how it is organized.
   - 1 = Sorted, 2 = Reversed, 3 = Random, 4 = Partially Sorted
6. Once you have chosen your unique combination, the program will run, sorting the file and producing a file titled "sortednumbers.txt", which will show the numbers in a sorted fashion. The time that it took to create this file will also be printed.
7. You will then be prompted with the question of whether or not you wish to continue viewing additional sorts.
   - 1 = Yes, 2 = No
8. If you select yes, repeat steps 3-7. If you select no, the program will end.

Note: if a number that is not a valid option is entered by the user, the program will continue to ask for an input until a valid input is entered.

# Part 3. Acknowledgements
Thank you all for viewing our project! We appreciate the effort being put forth by anyone who is reading this. This project was certainly difficult but we learned a great deal about sorting algorithms, GitHub, and how to collaborate as a team.
