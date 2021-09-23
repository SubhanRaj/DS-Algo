# Implementation of Queue Data Structure using Linked List

## What is a Queue?
A Queue is a linear structure which follows a particular order in which the operations are performed.A good example of a queue is any queue of consumers for a resource where the consumer that came first is served first.

## What is Linked List

Linked List is a linear data structure just like arrays but unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.

## Applications of Linked List data structure

1. Implementation of stacks and queues
2. Implementation of graphs : Adjacency list representation of graphs is most popular which is uses linked list to store adjacent vertices.
3. Dynamic memory allocation : We use linked list of free blocks.
4. Maintaining directory of names
5. Performing arithmetic operations on long integers
6. Manipulation of polynomials by storing constants in the node of linked list representing sparse matrices

## Basic Operations on Queue
 ### EnQueue(): Inserts an element at the rear of the Queue.
 - Queues maintain two data pointers, front and rear. Therefore, its operations are comparatively difficult to implement than that of stacks.
  The following steps should be taken to enqueue (insert) data into a queue −
 Step 1 − Check if the queue is full.
 Step 2 − If the queue is full, produce overflow error and exit.
 Step 3 − If the queue is not full, increment rear pointer to point the next empty space.
 Step 4 − Add data element to the queue location, where the rear is pointing.
 Step 5 − return success.

 #### Algorithm for Enqueue operation

    procedure enqueue(data)      
   
   if queue is full
      return overflow
   endif
   
   rear ← rear + 1
   queue[rear] ← data
   return true
   
end procedure

 ### DeQueue(): Removes an element from the front of the Queue.
 - The following steps are taken to perform dequeue operation −
Step 1 − Check if the queue is empty.
Step 2 − If the queue is empty, produce underflow error and exit.
Step 3 − If the queue is not empty, access the data where front is pointing.
Step 4 − Increment front pointer to point to the next available data element.
Step 5 − Return success.
 #### Algorithm for Dequeue operation

procedure dequeue
   
   if queue is empty
      return underflow
   end if

   data = queue[front]
   front ← front + 1
   return true

end procedure










