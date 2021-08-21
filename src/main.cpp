#include<iostream>
#include"heap.h"

int main() {
    std::cout<<"*****MIN HEAP IMPLEMENTATION*****"<<std::endl;
    //Number of elements for our minHeap
    std::cout<<std::endl;
    int N = 15;

    // Declare a heap with space for 15 elements
    MinHeap object(N);

    // Insert N random numbers
    for (int i = 0; i < N; i++) {
        std::cout << "Inserting element " << i + 1 << std::endl;
        object.Insert_key(5 + rand() % 100);
        object.printheap();
        std::cout << std::endl;
    }
    std::cout << "the minimum element(root) in the heap is: " << object.getmin() << std::endl;
    std::cout << std::endl;
    int min = object.extractMin();
    std::cout << "Min heap structure after extracting root node " << min << std::endl;
    object.printheap();
    std::cout << std::endl;
    object.delete_key(5 + rand() % 100);
    object.delete_key(5 + rand() % 100);
    std::cout << "Min heap structure after deleting any random numbers" << std::endl;
    object.printheap();
    std::cout<<"Min heap after decreasing  certain key"<<std::endl;
    object.decrease_key(1,6);
    object.printheap();
    std::cout << std::endl;
    std::cout << std::endl;



    std::cout << "*******PRIORITY QUEUE IMPLEMENTATION*******" << std::endl;
    std::cout << std::endl;


    PriorityQueue queue(10);
    for (int i = 0; i < 10; i++) {
        std::cout << "Inserting element " << i + 1 << std::endl;
        queue.enqueue(5 + rand() % 100);
        queue.Print();
        std::cout << std::endl;
    }
    std::cout << "the minimum element(root) in the Priority queue is: " << queue.front() << std::endl;
    std::cout << std::endl;

    queue.Print();
    std::cout<<std::endl;
    std::cout << "After Dequeue in Priority Queue\n\n";
    queue.dequeue();





    return 0;
}
