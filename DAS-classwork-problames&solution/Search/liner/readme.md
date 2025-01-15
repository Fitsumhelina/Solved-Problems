
## Overview
This program implements a **linear search** to find a specified key in an array. The program also calculates the time taken to execute the search operation using the `clock()` function.

---

## Problem Statement
The task is to search for an element in an array and identify its position (if found). Linear search, while simple, may not be efficient for large datasets. Measuring execution time offers insights into its performance.

---

## Approach
1. **Linear Search**:
   - Iterates through each element in the array.
   - If the element matches the key, the position is displayed.
   - If no match is found, a message is displayed.

2. **Execution Time Measurement**:
   - Uses the `clock()` function to measure the time taken to perform the search.

---

## Features
- **Simple Search**:
  - Implements a straightforward linear search algorithm.
- **Performance Measurement**:
  - Displays the time taken for the search operation.
- **User Interaction**:
  - Prompts the user to input array size, elements, and the key to search.

---

## How It Solves the Problem
This program identifies the position of a key in an array using linear search and provides feedback on its execution time.

---

## Code Explanation

1. **Input**:
   - The program takes input for:
     - Number of elements (`n`).
     - Array elements.
     - Key to search.

2. **Linear Search Logic**:
   - Iterates through the array using a `for` loop.
   - Compares each element with the key:
     ```cpp
     if (arr[i] == key) {
         cout << key << " is found at position " << i << endl;
     }
     ```
   - A flag (`index`) is used to determine if the key was found.

3. **Execution Time**:
   - Uses `clock()` to capture start and end times and calculates elapsed time:
     ```cpp
     cout << "Time taken: " << (t2 - t1) / CLOCKS_PER_SEC << " sec";
     ```

4. **Output**:
   - Displays the key's position if found.
   - Prints a message if the key is not in the array.
   - Displays execution time.

---

## Usage Instructions
1. **Compile**:
   ```bash
   g++ linear_search_timed.cpp -o linear_search_timed
   ```

2. **Run**:
   ```bash
   ./linear_search_timed
   ```

3. **Provide Input**:
   - Enter the array size, elements, and key when prompted.

4. **Example Execution**:
   ```
   How many numbers are entered?
   5
   Enter those numbers:
   10 20 30 40 50
   Enter the number to search it:
   30
   ```

   **Output**:
   ```
   30 is found at position 2
   Time taken: 0.00001 sec
   ```

---

## Limitations
- Linear search has \(O(n)\) time complexity and is not efficient for large datasets.
- Assumes a maximum array size of 100 (`arr[100]`).

---

## Conclusion
This program demonstrates a simple linear search algorithm with the added benefit of performance measurement, making it a great tool for small-scale search operations.