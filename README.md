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

Example:

   4 3 2 10 12 1 5 6

   4 3 2 10 12 1 5 6

   3 4 2 10 12 1 5 6

   2 3 4 10 12 1 5 6

   2 3 4 10 12 1 5 6

   2 3 4 10 12 1 5 6

   1 2 3 4 10 12 5 6

   1 2 3 4 5 10 12 6

   1 2 3 4 5 6 10 12


# Merge Sort
Merge sort is a fast efficient, "divide and conquer" sorting algorithm type that splits lists up into seperate elements that will be organized in smaller lists, to only be combined as one that is sorted properly. This algorithm works is a "not in-place" one, meaning it utilizes separate storage spaces to complete the list it's sorting. This sorting algorithm is also very stable, and completes it's code with a time complexity of O(nlogn)

Original Set:
   [4,2,7,5,3,1]

List is seperated into two:
   [4,2,7] / [5,3,1]

List is separated again:
   [4] [2,7] / [5] [3,1]

List is separated once more:
   [4] [2] [7]  / [5] [3] [1]

The list now starts to combine in numerical order:
   [4] [2,7] / [5] [1,3]

Code now implements numbers from their respective lists:
   [2,4,7] / [1,3,5]

Each list sequentially adds number to a final sorted list:
   [1,2,3,4...]       Remaining: [7] / [5]

List is now completed:
   [1,2,3,4,5,7]


# Quick Sort
Often described as a "divide and conquer" algorithm, Quick Sort sorts the elements of a list by selecting a value in this list to be the "pivot" value. Most often, this pivot value is either the first or last element of the list, but realistically it could be any random number from the list. (For the sake of our project, we always selected the last element in the list to be our pivot value). 

The goal of this pivot value is to put it at its correct position in the list and then partitioning the list into two parts: On the left of the pivot, a section of numbers less than the value of the pivot (not sorted yet). On the right of the pivot, a section of numbers greater than the value of the pivot (also not sorted yet).

After this partition is made, both sides of the partition are sorted by using recursion by setting the parameter for our high value equal to one less than the partition as well as one before the partition.

Example:

[15, 3, 9, 8, 5, 2, [7], 1, 6]
- 7 is the pivot value, and our lo and hi pointers point to the values 15 and 6.

[6, 3, 9, 8, 5, 2, [7], 1, 15]
- The values 15 and 6 swap, after seeing that 15 > 7 and 6 < 15.

[6, 3, 9, 8, 5, 2, [7], 1, 15]
- We then continue to iterate from the left and find that 9 > 7. Iterating further from the right as well will lead us to seeing 1 < 7.

[6, 3, 1, 8, 5, 2, [7], 9, 15]
- The values 9 and 1 swap.

[6, 3, 1, 8, 5, 2, [7], 9, 15]
- We can then see that 8 is the next value from the left that is greater than 7. From the right, we continue to move left to find the value 2, which is less than 7.

[6, 3, 1, 2, 5, 8, [7], 9, 15]
- The values 8 and 2 swap.

[6, 3, 1, 2, 5, 8, [7], 9, 15]
- Now, the pointers from the left and right side have met in the middle, and the algorithm will now recursively sort each side of the list, which has been partitioned by the pivot value.

[1, 2, 3, 5, 6, 7, 8, 9, 15]
- After recursively sorting the list, this is the end result.

# Count Sort
Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values (kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence.

For simplicity, consider the data in the range 0 to 9.

Input data: 1, 4, 1, 2, 7, 5, 2

  1) Take a count array to store the count of each unique object.
  
  Index:     0  1  2  3  4  5  6  7  8  9
  
  Count:     0  2  2  0   1  1  0  1  0  0


  2) Modify the count array such that each element at each index 
  stores the sum of previous counts. 
  
  Index:     0  1  2  3  4  5  6  7  8  9
  
  Count:     0  2  4  4  5  6  6  7  7  7


The modified count array indicates the position of each object in 
the output sequence.


  3) Rotate the array clockwise for one time.
   
   Index:     0 1 2 3 4 5 6 7 8 9
   
   Count:     0 0 2 4 4 5 6 6 7 7
  
  
  4) Output each object from the input sequence followed by 
  increasing its count by 1.
  
  Process the input data: 1, 4, 1, 2, 7, 5, 2. Position of 1 is 0.
  Put data 1 at index 0 in output. Increase count by 1 to place 
  next data 1 at an index 1 greater than this index.
  
  https://www.geeksforgeeks.org/counting-sort/

# Part 2. How to Run our Program
Here is a little explanation about how to run our program and what to expect when entering in your input:

# Downloads
   - First, you will need to download all of the files from our "sortingalgo" folder, which includes each of the .cpp and .h files for our four algorithms. You will also need to download each of the .txt files found in the "txtFiles" folder in order to run each unique combination of algorithms, text file sizes, and organization of values in the text files.
   - Note: Make sure all of these files are in the same folder.

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
