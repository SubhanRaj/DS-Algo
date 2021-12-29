# Implementation of Bubble Sort Data Structure using C Language
By : [Mohd. Huzaifa](https://www.instagram.com/huzaifa_raxtar/) 

## Sorting

- Sorting is the process of arranging data into meaningful order so that you can analyze it more effectively. For example, you might want to order sales data by calendar month so that you can produce a graph of sales performance. 

## What is Bubble Sort?

- Bubble sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
  
## How Bubble Sort Works

  - We take an unsorted array for our example. Bubble sort takes Ο(n2) time so we're keeping it short and precise.
   - Bubble sort starts with very first two elements, comparing them to check which one is greater.
  

   

## Algorithm of Bubble Sort

Bubble Sort in C is a sorting algorithm where we repeatedly iterate through the array and swap adjacent elements that are unordered. We repeat this until the array is sorted.

We assume list is an array of n elements. We further assume that swap function swaps the values of the given array elements.

```C
begin BubbleSort(list)

   for all elements of list
      if list[i] > list[i+1]
         swap(list[i], list[i+1])
      end if
   end for
   
   return list
   
end BubbleSort
```

## Time Complexity of Bubble Sort

1. Worst case time complexity: O(n^2)<br>
    Worst case occurs when array is reverse sorted.
 
2. Best case time complexity: O(n)<br>
   Best case occurs when array is already sorted.
   
3. Average case time complexity: O(n^2)
   
    
  