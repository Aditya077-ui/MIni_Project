#pragma once
#include<iostream>
#include<math.h>

class MinHeap {
private:
    //current size of the heap
    int size=0;
    //maximum size of the heap
    int max_capacity;
    //store elements as a aaray
    int* heap = new int[max_capacity];
    //return parent index
    int parent(int i) {
        return (i - 1) / 2;
    }
    //returns left child index
    int left_child(int i) {
        return (2 * i + 1);
    }
    //returns right child index
    int right_child(int i) {
        return (2 * i + 2);
    }
public:
    bool isEmpty() {
        return size == 0;
    }
    MinHeap() {}
    MinHeap(int capacity) {
        int size = 0;
        this->max_capacity = capacity;
       // heap.resize(max_capacity);
    }
    int getmin();
    void Insert_key(int key);

    //extract the minumum heap
    int extractMin();

    // This function deletes key at index i
    void delete_key(int i);
    void decrease_key(int i, int new_value);
    void shiftup(int i);
    //recursively heapify a subtree
    void shiftdown(int i);
    void printheap();
    void swap(int& x, int& y) {
        int temp = x;
        x = y;
        y = temp;
    }

};

class PriorityQueue {
    //object of another class

    int max_size=0;
    MinHeap obj;

public:
    PriorityQueue(int max_size ) { MinHeap obj(max_size); }
    int front();
    // Function to insert a new element
    // in the Binary Heap
    void enqueue(int key);

    //Function to delete a element
     // in the Binary Heap
    void dequeue();


    void Print();
};




