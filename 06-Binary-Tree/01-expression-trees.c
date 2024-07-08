/*
Expression Trees: a binary tree where the internal node represents an operator and each leaf node represents an operand.

Traversal:
Inorder: Similar to infix notation.
Postorder: Similar to postorder notation (a.k.a. reverse Polish notation).
Preorder: Similar to preorder notation (a.k.a. Polish notation).

Operator Priority/Precedence:
                ^       -> 5
                * / ~   -> 4
                + -     -> 3
                ( )     -> 2
                =       -> 1

Rules in Postorder Traversal:
1. From the center of each node, draw a line to the right.
2. Starting from the root node, traverse the outline of the tree in a counterclockwise direction.
If you hit a line, write the content of the node.

Rules in Preorder Traversal:
1. From the center of each node, draw a line to the left.
2. Starting from the root node, traverse the outline of the tree in a counterclockwise direction.
If you hit a line, write the content of the node.

Tips in Traversal:
1. You are doing it correctly if the operands are in the same order.

Resources:
Expression Tree Generator:
https://lnogueir.github.io/expression-tree-gen/
https://notation-visualizer.ajayliu.com/tree

Postorder and Preorder Generator:
https://raj457036.github.io/Simple-Tools/prefixAndPostfixConvertor.html
*/
