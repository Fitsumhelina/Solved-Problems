# README: Bubble Sort Program with Execution Time Measurement

## Overview
This program implements the **Bubble Sort** algorithm to sort an array in ascending order. It also measures the time taken to execute the sorting process using the `clock()` function.

---

## Problem Statement
The task is to sort an array of integers and output the sorted array. The program uses **Bubble Sort**, a simple sorting algorithm that repeatedly swaps adjacent elements if they are in the wrong order.

---

## Approach
1. **Bubble Sort**:
   - The algorithm compares adjacent elements and swaps them if they are in the wrong order.
   - This process repeats until the array is sorted.

2. **Execution Time Measurement**:
   - The program uses `clock()` to capture the start and end times, then calculates the time taken to perform the sorting.

---

## Features
- **Simple Sorting**:
  - Implements the Bubble Sort algorithm, which is easy to understand and implement.
- **Performance Measurement**:
  - Displays the time taken to complete the sorting operation.
- **User Interaction**:
  - Prompts the user to input the array size and elements to be sorted.

---

## How It Solves the Problem
The program sorts an array of integers using Bubble Sort and displays the sorted array. It also provides feedback on the time taken for the sorting operation.

---

## Code Explanation

1. **Input**:
   - The program asks the user to input:
     - Number of elements (`n`).
     - The elements to be sorted.

2. **Bubble Sort Logic**:
   - The algorithm performs adjacent swaps if the elements are in the wrong order:
     ```cpp
     if (arr[j] > arr[j+1]) {
         int temp = arr[j];
         arr[j] = arr[j+1];
         arr[j+1] = temp;
     }
     ```

3. **Execution Time**:
   - The program captures the start and end times using `clock()`:
     ```cpp
     cout << "Time taken: " << (t2 - t1) / CLOCKS_PER_SEC << " sec";
     ```

4. **Output**:
   - The sorted array is printed.
   - The execution time is displayed.

---

## Usage Instructions
1. **Compile**:
   ```bash
   g++ bubble_sort_timed.cpp -o bubble_sort_timed
   ```

2. **Run**:
   ```bash
   ./bubble_sort_timed
   ```

3. **Provide Input**:
   - Enter the array size and elements when prompted.

4. **Example Execution**:
   ```
   How many numbers are entered?
   5
   Enter those numbers:
   5 3 8 1 2
   ```

   **Output**:
   ```
   After sorting the given numbers:
   1
   2
   3
   5
   8
   Time taken: 0.000001 sec
   ```

---

## Limitations
- **Bubble Sort** has \(O(n^2)\) time complexity, which makes it inefficient for large arrays.
- The program assumes a maximum array size of 100 (`arr[100]`).

---

## Conclusion
This program demonstrates the **Bubble Sort** algorithm with time measurement functionality, suitable for small datasets. It provides insight into the algorithm's performance through execution time.