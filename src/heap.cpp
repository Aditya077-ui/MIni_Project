#include<iostream>
#include"../include/heap.h"

int MinHeap::getmin() {
    return this->heap[0];
}

//insert key into the min heap
void MinHeap::Insert_key(int key) {
    /*
    if (size == max_capacity) {

        std::cout << "MIN HEAP IS FULL! ::    " << size << std::endl;
        return;
    }
    */
    //increase the amount of elements in the heap
    size++;
    //insert the new key at the end
    int i = size - 1;
    heap[i] = key;
    shiftup(i);
}
//find the min heap property
//moves the element up until i>= parent or root
void MinHeap::shiftup(int i) {
    while (i != 0 && heap[parent(i)] > heap[i]) {
        swap(heap[i], heap[parent(i)]);
        i = parent(i);
    }


}


int MinHeap::extractMin() {
    // Check if the heap is empty
    if (size == 0) {
        std::cout << "EMPTY HEAP" << std::endl;
        return -1;
        // Check if there is only 1 element
    }
    else if (size == 1) {
        size--;
        return heap[0];
        // Normal extraction
    }
    else {
        // Store the root
        int root = heap[0];

        // Maintain heap shape and then order
        heap[0] = heap[size - 1];
        size--;
        shiftdown(0);

        // Return min element
        return root;
    }
}

// Decreases value of key at index 'i' to new_val.  It is assumed that
// new_val is smaller than heap[i].
void MinHeap::decrease_key(int i, int new_value) {
    heap[i] = new_value;
    shiftup(i);

}

void MinHeap::delete_key(int i) {
    decrease_key(i, INT_MIN);
    extractMin();

}


void MinHeap::shiftdown(int i) {
    // Set initial conditions
    int l = left_child(i);
    int r = right_child(i);
    int smallest = i;

    // Find the smallest element of the three
    if ((l < size) && (heap[l] < heap[smallest])) {
        smallest = l;
    }if ((r < size) && (heap[r] < heap[smallest])) {
        smallest = r;
    }

    // If the smallest of l or r, continue heapify
    if (smallest != i) {
        swap(heap[i], heap[smallest]);
        shiftdown(smallest);
    }
}

//print the heap in nice format
void MinHeap::printheap() {
    int power = 0;
    int value = 1;
    for (int i = 0; i < size; i++) {
        if (i == value) {
            std::cout << std::endl;
            power += 1;
            value += (1 << power);
        }
        std::cout << heap[i] << "  ";
    }
    std::cout << std::endl;
}


