/*
A binary heap is a binary tree with different rules:
1. MaxBinaryHeap: Parent nodes are larger than child nodes.
2. MinBinaryHeap: Parent nodes are smaller than child nodes.
3. No ordering between sibling nodes.
4. Left children are filled out first.

Traversal:
Breadth First Search (BFS): Array index (n).

Given the parent node n:
    Left child node: 2n + 1
    Right child node: 2n + 2

Given the child node n:
    Parent node: (n - 1) / 2

Operations:
1. Insertion (Bubble Up)
    Add to the end.
    Bubble up to maintain binary heap property.
2. Deletion
    Remove the root.
    Replace the most recently added.
    Sink down to maintain binary heap property.

Big O:
    Insertion and deletion:     O(log (n))
    Search:                     O(n), since it is an array

Importance of Binary Heaps:
It is an implementation of Priority Queue.

Building a Priority Queue:
Elements with higher priorities are served before elements with lower priorities.
Operation:
    1. Enqueue: Similar to Binary Heap insertion
    2. Dequeue: Similar to Binary Heap deletion

Slides:
https://cs.slides.com/colt_steele/heaps
*/