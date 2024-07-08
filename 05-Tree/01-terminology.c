/*
Tree: non-linear data structure that is (1) hierarchical in nature and (2) uses recursive definition.
    A collection of nodes (i.e. elements).
        Node:    N       -> number of individual elements
        Edge:    N-1     -> number of connecting links between two nodes

Root: Topmost node of the tree.
Edge: The connecting link between two nodes.
Parent node: A node with children. This includes the root node.
Child node: A descendant of a node. In a root, all nodes are child nodes except for the root.
Siblings: Child nodes sharing the same parent node.
Leaf node: A node with no children.
    Also called as External node.
Internal node: A node with at least one child. This includes the root node.
Degree: The number of edges connected to a node or the number of children a node has.
Level of a tree: The step from top of the three to the bottom.
    Root = Level 0
Height of a node: The number of edges in the longest path, starting from the leaf node to a particular node.
    Height of leaf node = 0
Depth of a node: The number of edges in the longest path, starting from the root to a particular node.
    Depth of a root = 0
Path: Refers to the sequence of nodes and edges between two nodes.
    Length of the path = number of nodes in the path
Subtree: A child node with at least two child nodes. A leaf node is not a subtree.
*/