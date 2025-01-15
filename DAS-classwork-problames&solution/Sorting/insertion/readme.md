Here is the **Insertion Sort** implementation with execution time measurement, simplified and clearly explained:

---

## README: Insertion Sort Program with Execution Time Measurement

### Overview
This program implements the **Insertion Sort** algorithm to sort an array in ascending order. The program also measures the time taken for the sorting operation using the `clock()` function.

---

### Problem Statement
Sort a list of integers using the **Insertion Sort** algorithm and display the sorted list. The program will also measure the execution time of the sorting process.

---

### Approach
1. **Insertion Sort**:
   - This algorithm works by picking each element from the unsorted part of the array and placing it in its correct position in the sorted part.

2. **Execution Time Measurement**:
   - The program uses `clock()` to measure the time taken to perform the sorting.

---

### Features
- **Insertion Sort**:
  - Efficient for small datasets with \(O(n^2)\) time complexity.
- **Execution Time**:
  - Displays the time taken to complete the sorting.
- **User Interaction**:
  - Prompts the user to input the array size and elements.

---

### How It Solves the Problem
The program sorts an array of integers using the Insertion Sort algorithm and displays the sorted array. It also outputs the time taken for the sorting operation.

---

### Code Explanation

1. **Input**:
   - The program prompts the user to input:
     - The number of elements (`n`).
     - The elements to be sorted.

2. **Insertion Sort**:
   - The main logic of Insertion Sort:
     ```cpp
     for (int i = 1; i < n; i++) {
         for (int j = i; j > 0; j--) {
             if (arr[j - 1] > arr[j]) {
                 // Swap the elements
                 int temp = arr[j];
                 arr[j] = arr[j - 1];
                 arr[j - 1] = temp;
             } else {
                 break;
             }
         }
     }
     ```

3. **Execution Time**:
   - The program uses `clock()` to measure the execution time:
     ```cpp
     t1 = clock();
     // Sorting algorithm
     t2 = clock();
     cout << "Time taken: " << (t2 - t1) / CLOCKS_PER_SEC << " sec";
     ```

4. **Output**:
   - Displays the sorted array and the time taken for the sorting operation.

---

### Usage Instructions
1. **Compile**:
   ```bash
   g++ insertion_sort_timed.cpp -o insertion_sort_timed
   ```

2. **Run**:
   ```bash
   ./insertion_sort_timed
   ```

3. **Provide Input**:
   - Enter the array size and the elements when prompted.

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

### Limitations
- **Insertion Sort** has \(O(n^2)\) time complexity, which makes it inefficient for larger arrays.
- The program assumes a maximum array size of 100 (`arr[100]`).

---

### Conclusion
This program implements **Insertion Sort** with time measurement functionality. It is effective for small datasets and gives insight into how the algorithm performs with respect to execution time.