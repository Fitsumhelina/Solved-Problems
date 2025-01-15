Here’s a concise explanation for your code which sorts an array using the **Bubble Sort** algorithm and measures the time taken:

---

### Problem Statement:
Sort an array in descending order using the **Bubble Sort** algorithm and display the sorted array. Measure the time taken to complete the sorting process.

---

### Approach:

1. **Bubble Sort Algorithm**:
   - The algorithm compares adjacent elements in the array. If the current element is smaller than the next one, it swaps them. This process is repeated for every pair of adjacent elements, iterating through the array multiple times.

2. **Execution Time Measurement**:
   - We use `clock()` to measure the time taken to perform the sorting operation.

---

### Features:

- **Bubble Sort**:
  - Time complexity: \(O(n^2)\), meaning it is inefficient for large lists.
  - It sorts elements by repeatedly swapping adjacent elements that are in the wrong order.
  
- **Execution Time**:
  - The program measures the time taken to perform the sort using `clock()`.

---

### Code Explanation:

1. **Input**:
   - The program prompts the user to input the number of elements (`n`) and the actual elements of the array.
   
2. **Bubble Sort**:
   - The outer loop iterates through the array, and the inner loop compares adjacent elements. If the element at index `i` is smaller than the element at index `j`, the two elements are swapped.
   ```cpp
   for (int i = 0; i <= n-2; i++) {
       for (int j = i+1; j <= n-1; j++) {
           if (arr[i] < arr[j]) {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
   ```

3. **Execution Time**:
   - We measure the start and end time using `clock()`, and then calculate the elapsed time in seconds.
   ```cpp
   t1 = clock();
   // Sorting algorithm
   t2 = clock();
   cout << "Time taken: " << (t2 - t1) / CLOCKS_PER_SEC << " sec";
   ```

4. **Output**:
   - After sorting, the program displays the sorted array and the time taken to sort it.

---

### Full Code:
```cpp
#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

int main(int argc, char** argv) {
    int n, arr[100];
    clock_t t1, t2;

    // Start the timer
    t1 = clock();

    // Input
    cout << "How many numbers are entered?" << endl;
    cin >> n;
    cout << "Enter those numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort (Descending Order)
    for (int i = 0; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output sorted array
    cout << "After sorting the given numbers in descending order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    // Stop the timer and display the time taken
    t2 = clock();
    cout << "Time taken: " << (t2 - t1) / CLOCKS_PER_SEC << " sec" << endl;

    return 0;
}
```

### Example Run:

```
How many numbers are entered?
5
Enter those numbers: 12 8 5 10 20
After sorting the given numbers in descending order:
20
12
10
8
5
Time taken: 0 sec
```

---

### Usage Instructions:

1. **Compile** the code:
   ```bash
   g++ bubble_sort_timed.cpp -o bubble_sort_timed
   ```

2. **Run** the compiled program:
   ```bash
   ./bubble_sort_timed
   ```

3. **Enter Input**:
   - When prompted, enter the number of elements and the array values to be sorted.

---

### Conclusion:

This program implements **Bubble Sort** to sort the array in descending order, and it also measures and displays the time taken for the sorting operation.