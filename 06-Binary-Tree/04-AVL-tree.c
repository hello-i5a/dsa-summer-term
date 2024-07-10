/*
AVL Tree:
    Named after Georgy Adelson-Velsky and Evgenii Landis.

Balance Factor bf: hL - hR
A balanced tree has bf = {-1, 0, 1}

Kinds of Rotation:
Single rotation:
    1. Left rotation (LL): `-` & `-`
    2. Right rotation (RR): `+` & `+`
Double rotation:
    1. Left-right rotation (LR): `+` & `-`, `+` & `+`
    2. Right-left rotation (RL): `-` & `+`, `-` & `-`
Note:
    Always note which node you rotated.
    Check the balance before and after rotation.

Operations:
1. Insertion
2. Deletion
3. Search
*/