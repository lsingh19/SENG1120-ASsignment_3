/*
* File Name: BTNode.h 
* Course: SENG1120
* Assessment: Assignment 3
*/
#ifndef LS_BTNODE
#define LS_BTNODE

#include <iostream> 
#include <cstdlib>

using namespace std; 
// declaring template
template <typename value_type> 

class BTNode
{
	public: 
		// -----------------------------------------------------
		//					Constructors 
		// -----------------------------------------------------
		/*
			Purpose: To create an instance of BTNode
			Pre-Condition: None
			Post-Condition: An instance of BTNode is created with all pointers set to null and data within the node is empty. 
		*/ 
		BTNode(); 
		
		/*
			Purpose: To creates an instance of BTNode the provided data
			Pre-Condition: The provided data is valid
			Post-Condition: An instance of BTNode is created with all pointers set to NULL and data within the node is set to the provided data. 
		*/
		BTNode(const value_type& init_data); 
		
		// -----------------------------------------------------
		//					Destructor 
		// ----------------------------------------------------- 
		/*
			Purpose: Delete the instance of BTNode.
			Pre-Condition: An instance of BTNode exists. 
			Post-Condition: The instance of BTNode is deleted. The pointers (left and right) and data is also deleted. 
		*/
		~BTNode(); 
		
		// -----------------------------------------------------
		//					Setter Methods 
		// -----------------------------------------------------
		/*
			Purpose: A method to set the left pointer (left child) of the BTNode
			Pre-Condition: An instance of BTNode exists and the provided input parameter is valid
			Post-Condition: The left pointer of the node is set to the input parameter. 
		*/
		void set_left(BTNode<value_type>* left_child); 
		
		/*
			Purpose: A method to set the right pointer (right child) of the BTNode
			Pre-Condition: An instance of BTNode exists and the provided input parameter is valid
			Post-Condition: The right pointer of the node is set to the input parameter.
		*/
		void set_right(BTNode<value_type>* right_child); 
		
		/*
			Purpose: A method to set the parent pointer (parent) of the BTNode
			Pre-Condition: an instance of BTNode exists and the provided input parameter is valid
			Post-Condition: the parent pointer of the node is set to the input parameter.
		*/
		void set_parent(BTNode<value_type>* parent_node); 
		
		/*
			Purpose: A method to set the data within the instance of BTNode
			Pre-Condition: An instance of BTNode exists and a valid input parameter is provided
			Post-Condition: the data within the instance of BTNode is set to the input parameter. 
		*/
		void set_data(const value_type& init_data); 
	
		// -----------------------------------------------------
		//					Getter Methods  
		// -----------------------------------------------------
		/*
			Purpose: returns the left child of the node
			Pre-Condition: an instance of BTNode exists
			Post-Condition: the left child of the node is returned
		*/
		BTNode<value_type>* get_left(); 
		
		/*
			Purpose: returns the left child of the node, but the returned left child will be a const BTNode
			Pre-Condition: an instance of BTNode exists
			Post-Condition: the left child of the node is returned as a const BTNode
		*/
		const BTNode<value_type>* get_left() const; 
		
		/*
			Purpose: returns the right child of the node
			Pre-Condition: an instance of BTNode exists
			Post-Condition: the right child of the node is returned
		*/
		BTNode<value_type>* get_right(); 
		
		/*
			Purpose: returns the right child of the node, but the returned right child will be a const BTNode
			Pre-Condition: an instance of BTNode exists
			Post-Condition: the right child of the node is returned as a const BTNode
		*/
		const BTNode<value_type>* get_right() const; 
		
		/*
			Purpose: returns the parent node of the current node
			Pre-Condition: an instance of BTNode exists
			Post-Condition: the parent node of the current node is returned
		*/
		BTNode<value_type>* get_parent(); 
		
		/*
			Purpose: returns the parent node of the current node, but the returned parent node will be a const BTNode
			Pre-Condition: an instance of BTNode exists
			Post-Condition: the parent node of the current node is returned as a const BTNode
		*/
		const BTNode<value_type>* get_parent() const; 
		
		/*
			Purpose: a reference to the data within the node is returned
			Pre-Condition: An instance of BTNode exists
			Post-Condition: a reference to the data within the node is returned 
		*/
		value_type& get_data(); 
		
		/*
			Purpose: a copy of the data within the node is returned
			Pre-Condition: An instance of BTNode exists
			Post-Condition: a copy of the data within the node is returned 
		*/
		const value_type get_data() const;
		
		// -----------------------------------------------------
		//					Check Methods 
		// ----------------------------------------------------- 
		/*
			Purpose: a method to check if the instance of BTNode is a leaf in the BSTree
			Pre-Condition: An instance of BTNode exists
			Post-Condition: a boolean value is returned which depends on whether the left and right pointer are set to NULL or not. 
		*/
		const bool is_leaf() const; 
		
		/*
			Purpose: a method to check if the instance of BTNode has only one child in the BSTree
			Pre-Condition: An instance of BTNode exists 
			Post-Condition: a boolean value is returned which depends on whether the node has only child in the BSTree or not.
		*/
		const bool has_one_child() const; 
		
	private: 
		BTNode<value_type>* left; 			// a pointer variable that points to the left child of the node in the BSTree
		BTNode<value_type>* right; 			// a pointer variable that points to the right child of the node in the BSTree
		BTNode<value_type>* parent; 		// a pointer variable that points to the parent of the node in the BSTree
		value_type data; 					// a variable to store the data of the node 
}; 
#include "BTNode.template"

#endif