/*
Tree: non-linear data structure that is (1) hierarchical in nature and (2) uses recursive definition.
    A collection of nodes (i.e. elements).
        Node:    N       -> number of individual elements
        Edge:    N-1     -> number of connecting links between two nodes

Root: Topmost node of the tree.
Edge: The connecting link between two nodes.
Parent node: A node with children. This includes the root node.
Child node: A descendant of a node. In a tree, all nodes are child nodes except for the root.
Siblings: Child nodes sharing the same parent node.
Leaf node: A node with no children.
    Also called as External node.
Internal node: A node with at least one child. This includes the root node.
Degree: The number of edges connected to a node or the number of children a node has.
Level: The distance from the root.
    Root = Level 0
    Children = Level 1
    Their children = Level 2 and so on.
    Also called as Breadth.
Height of a node: The number of edges in the longest path, starting from the leaf node to a particular node.
    Height of leaf node = 0
Depth of a node: The number of edges in the longest path, starting from the root to a particular node.
    Depth of a root = 0
Path: Refers to the sequence of nodes and edges between two nodes.
    Length of the path = number of nodes in the path
Subtree: A child node with at least two child nodes. A leaf node is not a subtree.

Binary Tree vs Binary Search Tree (BST) vs AVL Tree
Binary tree: A parent node has at most 2 children: left node and right node.
Binary search tree: A specific type of binary tree where nodes are ordered in a certain manner.
    left node < parent < right node
    The left node/left subtree: lesser values
    The right node/right subtree: greater values
    Combines the advantages of arrays and linked lists:
        Array
        (+): search on sorted array   = O(log (n))
        (-): insertion and deletion   = O(n)
        Linked list
        (-): search                   = O(n)
        (+): insertion and deletion   = O(1)
    BST is sorted/ordered and the insertion and deletion is efficient (if it is in linked list implementation).
AVL tree: A self-balancing BST, named after named after inventors Adelson-Velsky and Landis.
    Search, insertion and deletion    = O(log2 (n))
    The mechanism is to ensure that operations remain efficient i.e. O(log2 (n)) even after successive insertions versus an ordinary BST with O(n) for search.
*/