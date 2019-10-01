/*
* File Name: BSTree.h
* Course: SENG1120
* Assessment: Assignment 3
*/

#ifndef LS_BSTREE
#define LS_BSTREE

#include <iostream> 
#include <cstdlib> 
#include <string> 
#include <sstream> 
#include "BTNode.h"
using namespace std; 

template <typename value_type> 

class BSTree
{
	public: 
		// -----------------------------------------------------
		//					Constructors 
		// -----------------------------------------------------
		/* 
			Purpose: Creates an instance of BSTree
			Pre-Condition: None
			Post-Condition: Creates an instance of BSTree
		*/ 
		BSTree(); 
		
		/* 
			Purpose: Creates an instance of BSTree with the root set to a new BTNode that stores the input data
			Pre-Condition: the input data is valid
			Post-Condition: Creates an instance of BSTree with the root set to a new BTNode that stores the input data 
		*/ 
		BSTree(const value_type& data); 
		
		// -----------------------------------------------------
		//					Destructor 
		// ----------------------------------------------------- 
		/* 
			Purpose: Destructor that deletes/destroys the BSTree instance
			Pre-Condition: An instance of BSTree exists
			Post-Condition: The instance of BSTree is deleted/removed. 
		*/
		~BSTree();
		
		// -----------------------------------------------------
		//					Public Methods 
		// -----------------------------------------------------
		/* 
			Purpose: a method to the add data to the binary search tree. 
			Pre-Condition: data is valid and an instance of BSTree exists. 
			Post-Condition: A node is created on the binary search tree instance. The placement of the node 
							depends on value of the input data. 
		*/
		void add(const value_type& data);
		/* 
			Purpose: a method to remove data within the binary search tree if it exists within it. 
			Pre-Condition: The data is valid and an instance of BSTree exists.
			Post-Condition: If the data exists within Binary Search Tree then it is removed. 
		*/
		void remove(const value_type& data); 
		
		/* 
			Purpose: a helper method that will return the data within the BSTree in a string format. Output string will
					 be in In-Order Traversal. 
			Pre-Condition: An instance of BSTree exists.
			Post-Condition: The data within the BSTree is returned as a string in a In-Order Traversal. 
		*/
		const string printInOrder() const;
		
	private: 
		BTNode<value_type>* root; 	// a pointer variable that points to the root of the binary search tree
		
		// -----------------------------------------------------
		//					Private Methods 
		// -----------------------------------------------------
		/* 
			Purpose: a recursive function that will be used to add data to the binary search tree
			Pre-Condition: The data is valid and an instance of BSTree exists. 
			Post-Condition: The data is added to the binary search tree, if there is a match for the data		
							then input data replaces the old data of the node. 
		*/
		void add_data(const value_type& data, BTNode<value_type>* current_node);
		
		
		/* 
			Purpose: The far left node of the input node is returned.   
			Pre-Condition: An instance of BSTree exists and the provided node is valid 
			Post-Condition: The BTNode to the far left node of the current node (sub-tree) is returned. 
		*/
		BTNode<value_type>* find_min(BTNode<value_type>* current_node) const; 
		
		/* 
			Purpose: Compare two data inputs 
			Pre-Condition: An instance of BSTree exists and both input data is valid.
			Post-Condition: A integer value is returned from the comparison between two inputs. 
		*/
		const int compare(const value_type& a, const value_type& b) const; 
		
		/* 
			Purpose: a recursive function to search for and remove the input data from the BSTree
			Pre-Condition: an instance of BSTree exists and the input data is valid
			Post-Condition: if the data exists within the BSTree then it is removed, if the data doesn't exists within the tree then nothing is deleted. 
		*/
		void remove_data(BTNode<value_type>* current_node, const value_type& data);
		
		/* 
			Purpose: A recursive function used by the 'printInOrder' to store the data within the tree in stringstream variable 'out' 
			Pre-Condition: an instance BSTree exists, a valid node is provided, the stringstream variable is valid. 
			Post-Condition: The data within the BSTree is stored 'out' and in a In-Order Transversal
		*/
		void printInOrderPrivate(BTNode<value_type>* current_node, stringstream& data) const; 
		
		// A recursive function to delete the tree but doing it this way leads to errors/memory leaks within the program
			// void delete_tree(BTNode<value_type>* current_node);
}; 

template <typename value_type>
ostream& operator << (ostream& out, BSTree<value_type>& BSTree);

#include "BSTree.template"
#endif