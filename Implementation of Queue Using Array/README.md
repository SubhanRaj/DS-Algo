# Implementation of Queue Data Structure Using Array

## What is Queue?
  A queue is a data structure in which whatever comes first will go out first. It follows the <b>“FIFO (First-In-First-Out)”</b> policy. In Queue, the insertion is done from one end known as the rear end or the tail of the queue, whereas the deletion is done from another end known as the front end or the head of the queue. 

## Operations on Queue
  - Enqueue: The enqueue operation is used to insert the element at the rear end of the  queue.
  - Dequeue: The dequeue operation performs the deletion from the front-end of the queue. 
  - Peek: This is the third operation that returns the element, which is pointed by the front pointer in the queue    but does not delete it.
  - Queue overflow  (isfull):  When the Queue is completely full, then it shows the overflow condition.
  - Queue underflow (isempty): When the Queue is empty, i.e., no elements are in the Queue then it throws the underflow condition.
  
## Implementation of Queue Using Array in C language

<h3>Queue data structure using array can be implemented as follows...<h3>
Step 1. Include all the header files which are used in the program and define a constant 'MAX' with specific value.<br>
Step 2. Declare all the user defined functions which are used in queue implementation.<br>
Step 3. Create a one dimensional array with above defined MAX (int queue[MAX])<br>
Step 4. Define two integer variables 'front' and 'rear' and initialize both with '-1'.<br> 
Step 5. Then implement main method by displaying menu of operations list and make suitable function calls to perform operation selected by the user on queue.<br>
