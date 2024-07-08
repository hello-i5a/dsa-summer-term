/*
Huffman code: a binary tree. It is a method of lossless data compression that uses variable-length codes to represent characters or symbols. 
                It assigns shorter codes to more frequently occurring characters, optimizing the efficiency of the encoding process.
                Each node can have up to two children, and the tree is built specifically for encoding and decoding purposes based on the frequency of characters or symbols.

1. Count the frequency for each character.
2. List out from the most frequent to the least frequent.
3. Add the occurrences/frequency of the list frequent first.
Keep on repeating until all characters are added.  Prioritize the leaf nodes (i.e. the characters).
Tip: Always arrange in descending order.
4. Create a code table:
        Least frequent is 0.
        Most frequent is 1.
        If similar frequency, left node is 0 and right node is 1.

Resources:
Huffman Tree Generator:
https://www.csfieldguide.org.nz/en/interactives/huffman-tree/

Huffman Coding Generator:
https://asecuritysite.com/calculators/huff
https://www.dcode.fr/huffman-tree-compression
*/
