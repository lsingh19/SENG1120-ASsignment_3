/*
* File Name: HTable.h
* Course: SENG1120
* Assessment: Assignment 3
*/

#ifndef LS_BTABLE
#define LS_BTABLE

#include <iostream> 
#include <cstdlib> 
#include <sstream>
#include <string>

using namespace std;
// declaring template
template <typename value_type>

class HTable
{
	public: 
		/*
			Purpose: To create an instance of HTable
			Pre-Condition: None
			Post-Condition:	An instance of HTable is created
		*/
		HTable(); 
		
		/*
			Purpose: To create an instance of HTable
			Pre-Condition: None
			Post-Condition:	An instance of HTable is created
		*/
		HTable(const value_type& data); 
		
		/*
			Purpose: Deletes the instance of HTable
			Pre-Condition: An instance of HTable exists  
			Post-Condition: The instance of HTable is deleted/removed 
		*/
		~HTable(); 
		
		/*
			Purpose: Add an object to the hash table
			Pre-Condition: An instance of the HTable exists and the provided data is valid
			Post-Condition: The provided data is placed into the HTable array
		*/
		void add(const value_type& data);
		
		/*
			Purpose: Search and Removes the input paramter if it exists within the hash table 
			Pre-Condition: An instance of HTable exists and the input data is valid
			Post-Condition: If the data exists within the HTable array then it is removed. 
		*/
		void remove(const value_type& data); 
		
		/*
			Purpose: A helper method for 'cout' (pipeline) overload operator
			Pre-Condition: An instance of HTable exists. 
			Post-Condition: The data within the array is returned as a string. Returned data is in the order 0 to 149. 
		*/
		const string printTable() const; 
		
	private: 
		static const int SIZE = 150;		// a int variable to store the size of the array (which can not be changed during the program and is static). 
		value_type hash[SIZE]; 				// An array of value_type's (size 150) to store data
		
		/*
			Purpose: Returns an integer that will be used to determine where the data will be placed or is in within the array. 
			Pre-Condition: An instance of HTable exists and the provided data is valid.
			Post-Condition: An integer is returned which is where the data will be stored or is placed within the array
		*/
		const int hashfunc (const value_type& data) const;
};
		// pipleine '<<' operator overloader 
		template <typename value_type>
		ostream& operator << (ostream& out, HTable<value_type> hashtable);

		#include "HTable.template" 

#endif