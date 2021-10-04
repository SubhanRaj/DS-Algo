# Insertion Sort

Insertion sort algorithm arranges a list of elements in a particular order. In insertion sort algorithm, every iteration moves an element from unsorted portion to sorted portion until all the elements are sorted in the list.

## Process for insertion sort

The insertion sort algorithm is performed using the following steps...

  - Step 1 - Assume that first element in the list is in sorted portion and all the remaining elements are in unsorted portion.
  - Step 2: Take first element from the unsorted portion and insert that element into the sorted portion in the order specified.
  - Step 3: Repeat the above process until all the elements from the unsorted portion are moved into the sorted portion.
  
## Complexity of the Insertion Sort Algorithm

To sort an unsorted list with 'n' number of elements, we need to make (1+2+3+......+n-1) = (n (n-1))/2 number of comparisions in the worst case. If the list is already sorted then it requires 'n' number of comparisions.

  - **Worst Case** : O(n^2)
  - **Best Case** : Ω(n)
  - **Average Case** : Θ(n^2)