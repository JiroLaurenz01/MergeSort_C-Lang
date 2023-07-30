# C Merge Sort Algorithm

This repository contains a simple implementation of the Merge Sort algorithm in the C programming language. Merge Sort is an efficient, divide-and-conquer algorithm used for sorting an array or a list in ascending order. It divides the input into smaller halves, sorts them recursively, and then merges the sorted halves to produce the final sorted output.

## How to Use

1. **Clone the repository:** 
   ```
   git clone https://github.com/your-username/C-Merge-Sort-Template.git
   cd C-Merge-Sort-Template
   ```

2. **Compile and run the program:**
   ```
   gcc MergeSort.c -o merge_sort
   ./merge_sort
   ```

3. **Testing:**
   Modify the `main` function in `MergeSort.c` to test the algorithm on your custom input arrays.

## Merge Sort Function

```c
void MergeSort(int array[], int length);
```

This function sorts the input integer array using the Merge Sort algorithm.

## Merge Function

```c
void Merge(int leftArray[], int rightArray[], int array[], int length);
```

This function is a helper function used by the Merge Sort algorithm to merge two sorted subarrays into a single sorted array.

## Performance

Merge Sort has a time complexity of O(n log n) in all cases, making it one of the fastest sorting algorithms. However, it requires additional memory for the temporary subarrays, so keep in mind the memory constraints for large arrays.

## Contributions

Contributions to improve the algorithm's efficiency, readability, or additional test cases are welcome! Please create a pull request, and we'll be glad to review it.

---

Again, you can expand on each section as needed to provide more comprehensive information about the Merge Sort algorithm and your C implementation.
