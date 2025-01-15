Here is your **Selection Sort** implementation along with execution time measurement, simplified and clearly explained:

---

## README: Selection Sort Program with Execution Time Measurement

### Overview
This program implements the **Selection Sort** algorithm to sort an array of integers in ascending order. It also measures the time taken for the sorting operation using the `clock()` function.

---

### Problem Statement
Sort a list of integers using the **Selection Sort** algorithm and display the sorted list. The program also measures the execution time of the sorting process.

---

### Approach
1. **Selection Sort**:
   - In this algorithm, the program iteratively selects the smallest (or largest) element from the unsorted part of the array and swaps it with the first unsorted element.

2. **Execution Time Measurement**:
   - The program uses `clock()` to measure the time taken for the sorting operation.

---

### Features
- **Selection Sort**:
  - Works by repeatedly selecting the smallest (or largest) element in the unsorted portion of the list.
  - Time complexity is \(O(n^2)\), making it inefficient for large lists.
- **Execution Time**:
  - Displays the time taken to complete the sorting.
- **User Interaction**:
  - Prompts the user to input the array size and elements.

---

### How It Solves the Problem
The program sorts an array of integers using the **Selection Sort** algorithm and displays the sorted array. It also outputs the time taken for the sorting operation.

---

### Code Explanation

1. **Input**:
   - The program prompts the user to input:
     - The number of elements (`n`).
     - The elements to be sorted.

2. **Selection Sort**:
   - The main logic of Selection Sort:
     ```cpp
     for (int i = 0; i < n-1; i++) {
         int small = i;
         for (int j = i+1; j < n; j++) {
             if (arr[j] < arr[small]) {
                 small = j;
             }
         }
         if (small != i) {
             // Swap the smallest element with the current element
             int temp = arr[small];
             arr[small] = arr[i];
             arr[i] = temp;
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
   g++ selection_sort_timed.cpp -o selection_sort_timed
   ```

2. **Run**:
   ```bash
   ./selection_sort_timed
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
- **Selection Sort** has \(O(n^2)\) time complexity, which makes it inefficient for larger arrays.
- The program assumes a maximum array size of 100 (`arr[100]`).

---

### Conclusion
This program implements **Selection Sort** with time measurement functionality. It is efficient for small datasets but not recommended for large datasets due to its \(O(n^2)\) time complexity. The program also provides insight into the time taken to perform the sorting operation.