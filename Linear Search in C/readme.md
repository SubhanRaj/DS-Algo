# C Program to Implement Linear Search

 A <b>C</b> Program which finds the position of an element in an array using Linear Search Algorithm. We have to take an array and a value to be searched in the array as input from the user, and then find the position of that element in array by using linear search algorithm.

 ## Expected Input and Output

 1. Average Case: If the searched element is other than the first and the last element of the array. For example:

    ```C
    If the input array is: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    And the element to be searched is: 5
    Then the output should be: 4
    ```
  <b>Average case time complexity: O(n)</b>
  
 2. Best Case: If the searched element is the first element of the array. For example:
    
    ```C
    If the input array is {4, 6, 1, 2, 5, 3}
    and if the element searched is 4,
    then the expected output will be Position 0.
    ```
  <b>Best case time complexity: O(1)</b>
  
  3. Worst Case: If the searched element is the last element of the array. For example:
    
  ```C
  If the input array is {4, 6, 1, 2, 5, 3}
  and if the element searched is 3,
  then the expected output will be Position 5.
  ```
  <b>Worst case time complexity: O(n)</b>

## Solution of the problem

 1. We will take the input array and the element to be searched as input from the user.
 2. For finding the position of the element in the array, we will start from the first element of the array and compare it with the element to be searched.
 3. We will keep on comparing the element with the element to be searched until we find the element to be searched.
 4. We will return the position of the element to be searched.
 5. we will return ```false``` if the element to be searched is not found in the array.
   <details>

   <summary>Cases in which program will return false:</summary>

     1. we will return false if the array is empty.
     2. we will return false if the element to be searched is not an integer.
     3. we will return false if the array is not an array.
     4. we will return false if the array is not an array of integers.
   
   </details>

 ## Program Explanation

   1. In Linear search, we search an element or value in a given array by traversing the array from the starting, till the desired element or value is found.
   2. The array is searched sequentially and the position is returned if the key element to be searched is available in the array, otherwise -1 is returned.
   3. Here in this C Program we have not made any function specifically for linear search, rather we can look for presence of element in an array in the main function itself.
   4. We traverse the array from the 0th index in increasing order of index, if we find the element we break the loop there itself and print the position of the element in the array, but if the element requested is not there in array, we simply print that “Element is not present in the array”.
   5. If we’d have created a separate function for linear search and the element could not be found in the array, we would have returned -1 in that case denoting absence of the element.
   

 

   




