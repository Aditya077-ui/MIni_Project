#include "heap.h"

class PriorityQueue {
    //object of another class
    MinHeap *obj;

public:
  PriorityQueue(int max_size = 0) 
  {  
    obj = new MinHeap(max_size);
   }
  ~PriorityQueue() { delete obj; }
  int front();
  // Function to insert a new element
  // in the Binary Heap
  void enqueue(int key);

  // Function to delete a element
  // in the Binary Heap
  void dequeue();

  void Print();
};



