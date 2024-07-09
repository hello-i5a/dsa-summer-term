/*
Search in BST
1. BST is a sorted array.
2. When searching, Binary Search algorithm is performed.
	If it is lesser, go to the left subtree.
	If it is greater, go to the right subtree.
3. Return True if found, else False.

Insertion in BST
1. Maintain the BST property.
	Lesser value, insert in the left node.
	Greater value, insert in the right node.
Special case: Value to be inserted is equal.
				Do you insert in the left node or right node? Technically not allowed. Nodes are unique keys.

Deletion in BST
1. First you have to search if the element exist in the tree. If yes, there are cases:
Case 1: Delete a leaf node
Case 2: Delete a node with single child
			The only child.
Case 3: Delete a node with both children
			(a): Inorder predecessor: largest node in the left subtree
			(b): Inorder successor: smallest node in the right subtree
Case 4: Delete the root
			If no children: point to NULL.
			If one child: point to the only child.
			If two children: either inorder predecessor or inorder successor.
Remember: Maintain BST property.

BST Simulator:
https://www.cs.usfca.edu/~galles/visualization/BST.html
*/
