#include <stdio.h>

void MergeSort(int array[], int length);
void Merge(int leftArray[], int rightArray[], int array[], int length);

int main(void) {
    // Your code for testing the Merge Sort algorithm
}

void MergeSort(int array[], int length){
    // Base case: If the array has one or zero elements, it's already sorted
    if (length <= 1) return;
    
    // Divide the array into two halves
    int middle = length / 2;
    int leftArray[middle], rightArray[length - middle];
    
    int i = 0, j = 0;
    
    // Fill the left and right subarrays
    for(; i < length; i ++){
        if (i < middle)
            leftArray[i] = array[i];
        else
        {
            rightArray[j] = array[i];
            j++;
        }
    }
    
    // Recursively sort the left and right subarrays
    MergeSort(leftArray, length / 2);
    MergeSort(rightArray, length - middle);

    // Merge the sorted subarrays
    Merge(leftArray, rightArray, array, length); 
}

void Merge(int leftArray[], int rightArray[], int array[], int length){
    // Initialize indices and sizes
    int leftSize = length / 2;
    int rightSize = length - leftSize;
    int i = 0, l = 0, r = 0;
    
    // Merge the left and right subarrays into the original array
    for (; l < leftSize && r < rightSize; i++)
    {
        if (leftArray[l] < rightArray[r])
        {
            array[i] = leftArray[l];
            l++;
        }
        else
        {
            array[i] = rightArray[r];
            r++;
        }
    }

    // Copy any remaining elements from the left subarray
    for (; l < leftSize; i++){
        array[i] = leftArray[l];
        l++;
    }

    // Copy any remaining elements from the right subarray
    for (; r < rightSize; i++){
        array[i] = rightArray[r];
        r++;
    }
}



