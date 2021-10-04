# Stack Using Array

  Stack is a linear data structure that follows a particular order in which the operations are performed.The order may be LIFO(Last In First Out) or FILO(First In Last Out).

  Mainly the following three basic operations are performed in the stack:

  - Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
  - Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
  - Peek or Top: Returns the top element of the stack.
  - isEmpty: Returns true if the stack is empty, else false.
  
## Time Complexities of operations on stack:
push(), pop(), isEmpty() and peek() all take O(1) time. We do not run any loop in any of these operations.
            
## Space Complexity of operations on stack:
- The space complexity of push(), pop() and isEmpty() is O(1).
- The space complexity of peek() is O(n).
- The space complexity of the entire program is O(n).

## Applications of stack:
- Balancing of symbols
- Infix to Postfix /Prefix conversion
- Redo-undo features at many places like editors, photoshop.
- Forward and backward feature in web browsers
- Used in many algorithms like Tower of Hanoi, tree traversals, stock span problem, histogram problem.
- Backtracking is one of the algorithm designing techniques. Some examples of backtracking are the Knight-Tour problem, N-Queen problem, find your way through a maze, and game-like chess or checkers in all these problems we dive into someway if that way is not efficient we come back to the previous state and go into some another path. To get back from a current state we need to store the previous state for that purpose we need a stack.
- In Graph Algorithms like Topological Sorting and Strongly Connected Components
- In Memory management, any modern computer uses a stack as the primary management for a running purpose. Each program that is running in a- computer system has its own memory allocations
- String reversal is also another application of stack. Here one by one each character gets inserted into the stack. So the first character of the string is on the bottom of the stack and the last element of a string is on the top of the stack. After Performing the pop operations on the stack we get a string in reverse order.

## Implementation of Stack using Array 

### Creating an empty Stack

  - Step 1 - Include all the header files which are used in the program and define a constant 'SIZE' with specific value.
  - Step 2 - Declare all the functions used in stack implementation.
  - Step 3 - Create a one dimensional array with fixed size (int stack[SIZE])
  - Step 4 - Define a integer variable 'top' and initialize with '-1'. (int top = -1)
  - Step 5 - In main method, display menu with list of operations and make suitable function calls to perform operation selected by the user on the stack.

### push(value) - Inserting value into the stack

In a stack, push() is a function used to insert an element into the stack. In a stack, the new element is always inserted at top position. Push function takes one integer value as parameter and inserts that value into the stack. We can use the following steps to push an element on to the stack...

  - Step 1 - Check whether stack is FULL. (top == SIZE-1)
  - Step 2 - If it is FULL, then display "Stack is FULL!!! Insertion is not possible!!!" and terminate the function.
  - Step 3 - If it is NOT FULL, then increment top value by one (top++) and set stack[top] to value (stack[top] = value).
### pop() - Delete a value from the Stack

In a stack, pop() is a function used to delete an element from the stack. In a stack, the element is always deleted from top position. Pop function does not take any value as parameter. We can use the following steps to pop an element from the stack...

  - Step 1 - Check whether stack is EMPTY. (top == -1)
  - Step 2 - If it is EMPTY, then display "Stack is EMPTY!!! Deletion is not possible!!!" and terminate the function.
  - Step 3 - If it is NOT EMPTY, then delete stack[top] and decrement top value by one (top--).

### display() - Displays the elements of a Stack

We can use the following steps to display the elements of a stack...

  - Step 1 - Check whether stack is EMPTY. (top == -1)
  - Step 2 - If it is EMPTY, then display "Stack is EMPTY!!!" and terminate the function.
  - Step 3 - If it is NOT EMPTY, then define a variable 'i' and initialize with top. Display stack[i] value and decrement i value by one (i--).
  - Step 3 - Repeat above step until i value becomes '0'.