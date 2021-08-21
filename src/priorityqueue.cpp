#include "../include/priorityQueue.h"

void PriorityQueue::enqueue(int key) {
    //member function of class MinHeap
    obj->Insert_key(key);
    std::cout << key << " is inserted into the priority queue!" << std::endl;
}
void PriorityQueue::dequeue() {
    //member function of class Minheap
    obj->extractMin();
    obj->printheap();
}

int PriorityQueue::front() {
    //gives element with the minimum priority
    return obj->getmin();
}


// void PriorityQueue::change_priority(int i, int val) {
//     int oldp = priority[i];
//     priority[i] = val;

//     if (val > oldp) {
//         obj->shiftup(i);
//     }
//     else {
//         obj->shiftdown(i);
//     }
// }


void PriorityQueue::Print() {
    obj->printheap();
}

