# SENG1120-Assignment_3 - 15.0 / 15.0
Data Structures Course - Assignment 3

DEMO: 1. Program compiles and works correctly with the files provided  
 
A: Total (  15.0  / 15.0) 

REMOVE MARKS IF: 
- Code leads to memory leaks during execution (  0.0  /-1.0) 

- Lack of / wrong use of macroguards (  0.0  /-1.0) 

- Lack of / wrong use of destructors (  0.0  /-1.0) 

- Lack of const qualifiers (  0.0  /-1.0) 

- Lack of documentation in the code (  0.0  /-2.0) 

- Declaration of temporary variables as member variables of the class (  0.0   /-1.0) 

- Lack of use of dynamic memory allocation in BTNode/BSTree (  0.0  /-10.0) 

- Violation of encapsulation / information hiding (  0.0  /-5.0) 

- Use of friend methods (  0.0  /-2.0) 

- Any other issues, e.g. lack of use of recursion in methods, etc. (  0.0  ) 
 
B: Total deductions (  0.0  ) 

FINAL MARK: (A-B)  15.0 / 15.0 

Comments: 
Excellent work, a perfect assignment!

# Assignment Specifications
You are required to create a binary search tree and a hash table data structures to store strings. Both structures should have functions to add and remove elements. The classes MUST be implemented as class templates. The binary search tree class must be called BSTree and will use as nodes instances of BTNode. The hash table class must be named HTable.

You will be provided a demo file and your classes need to interface with it. The binary search tree contents must be printed using an inorder traversal. 

The hash table class must store the items in an array of size 150, and the contents can be printed from position 0 to n - 1, but only for those positions that contain a valid entry. The hash function used must sum up the ASCII values of each character in the string and return the result of that sum mod (%) 150: 
