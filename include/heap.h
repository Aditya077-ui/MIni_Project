#pragma once
#include<iostream>
#include<math.h>

class MinHeap {
private:
    //current size of the heap
    int size;
    //maximum size of the heap
    int max_capacity;
    //store elements as a aaray

    // int* heap = new int[max_capacity];

    int *heap;
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
         size = 0;
        this->max_capacity = capacity;
        heap = new int[max_capacity];
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