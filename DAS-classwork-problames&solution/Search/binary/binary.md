
## Overview
This program performs a **binary search** on a sorted array to find a specific key. Binary search is an efficient algorithm that divides the search space in half with each iteration, reducing the time complexity to \(O(\log n)\). Additionally, this program measures the time taken to execute the search operation using the `clock()` function.

---

## Problem Statement
Searching for an element in a list is a common operation in computer science. A linear search has \(O(n)\) time complexity, which can be inefficient for large datasets. By utilizing binary search, this program efficiently locates the desired element in a sorted list. The challenge is to implement binary search correctly and measure the time it takes to execute.

---

## Approach
1. **Binary Search Algorithm**:
   - The array is assumed to be sorted.
   - The algorithm repeatedly divides the array into two halves:
     - If the key is equal to the middle element, the search is successful.
     - If the key is smaller than the middle element, the search continues in the left half.
     - If the key is larger, the search continues in the right half.
   - This process continues until the key is found or the search space is empty.

2. **Execution Time Measurement**:
   - Uses the `clock()` function from the `<ctime>` library to calculate the time taken for the search operation.
   - The difference between the start and end times is divided by `CLOCKS_PER_SEC` to get the execution time in seconds.

---

## Features
1. **Efficient Search**:
   - Implements binary search for sorted arrays.
   - Reduces the number of comparisons compared to linear search.
2. **Execution Time Calculation**:
   - Displays the time taken to perform the search operation.
3. **Interactive Input**:
   - Prompts the user to input the size of the array, its elements, and the key to search.
4. **Result Display**:
   - Shows the index where the key is found or a message if the key is not in the array.

---

## How It Solves the Problem
- The program solves the inefficiency of linear search by implementing a binary search, which is optimal for sorted data.
- By providing execution time, it gives insights into the algorithm's performance.

---

## Functions and Logic
1. **Input**:
   - Prompts the user to enter:
     - The number of elements in the array.
     - The elements of the array (assumed to be sorted).
     - The key to search for.
2. **Binary Search**:
   - Initializes two pointers: `left` and `right`.
   - Calculates the middle index:
     ```cpp
     int mid = (left + right) / 2;
     ```
   - Compares the key with the middle element:
     - If equal, prints the index and exits the loop.
     - If smaller, updates the `right` pointer to search the left half.
     - If larger, updates the `left` pointer to search the right half.
3. **Result Display**:
   - If the key is found, prints the index.
   - If not, displays a message indicating that the key is not in the list.
4. **Execution Time**:
   - Captures the start and end times using `clock()` and calculates the elapsed time in seconds.

---

## Usage Instructions
1. **Compile the Program**:
   - Use a C++ compiler such as `g++`:
     ```bash
     g++ binary_search_timed.cpp -o binary_search_timed
     ```

2. **Run the Program**:
   ```bash
   ./binary_search_timed
   ```

3. **Provide Inputs**:
   - Enter the number of elements in the array.
   - Input the elements of the array in **sorted order**.
   - Enter the key to search for.

4. **Output**:
   - If the key is found, the program displays the index.
   - If the key is not found, it displays a "not found" message.
   - The execution time of the search is displayed at the end.

---

## Example Execution
### Input:
```
How many numbers are entered?
5
Enter those numbers:
1 3 5 7 9
Enter the number to search it:
7
```

### Output:
```
7 found at the index of 3
Time taken: 0.00001 sec
```

---

## Features to Enhance
1. **Validation for Sorted Input**:
   - Add functionality to check if the input array is sorted and prompt the user if it is not.
2. **Support for Multiple Keys**:
   - Extend the program to search for multiple keys in a single execution.
3. **Reverse Order Search**:
   - Add support for arrays sorted in descending order.
4. **Performance Analysis**:
   - Measure and compare execution time for arrays of varying sizes.

---

## Limitations
- The array must be sorted for the binary search to work correctly.
- Only works for static input during runtime and does not handle dynamic input efficiently.
- Assumes no duplicate keys in the array.

---

## Conclusion
This program provides an efficient solution for searching in a sorted array using the binary search algorithm. It also introduces performance measurement, making it a useful tool for understanding and analyzing algorithm efficiency.