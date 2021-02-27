/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * Implementation of stack using singly linked list 
 * Elements should be numbers only
 */
#include <bits/stdc++.h>
//#include <iostream>
using namespace std; 

// Declare linked list node 

struct Node 
{ 
	int data; 
	struct Node* link; 
}; 

struct Node* top; 

// Function to add an element data in the stack insert at the beginning 
void push(int data) 
{ 
	
	// Create new node temp and allocate memory 
	struct Node* temp; 
	temp = new Node(); 

	// Check if stack (heap) is ful+l. It lead to stack overflow 
	if (!temp)
	{ 
		cout << "\nHeap Overflow"; 
		exit(1); 
	} 
	
	temp->data = data; // Initialize data into temp data field 
	
	temp->link = top; // Put top pointer reference into temp link 
	
	top = temp; // Make temp as top of Stack 
} 

// Function to check if the stack is empty or not 
int isEmpty() 
{ 
	return top == NULL; 
} 

// Function to return top element in a stack 
int peek() 
{ 
	
	// Check for empty stack 
	if (!isEmpty()) 
		return top->data; 
	else
		exit(1); 
} 

// Function to pop top element from the stack 
void pop() 
{ 
	struct Node* temp; 

	// Check for stack underflow 
	if (top == NULL) 
	{ 
		cout << "\nStack Underflow" << endl; 
		exit(1); 
	} 
	else
	{ 
		
		temp = top; // Top assign into temp 

		top = top->link; // Assign second node to top 
		
		temp->link = NULL; // Destroy_connection_between first and second
		
		free(temp); // Release memory of top node 
	} 
} 

// print all the elements of the stack 
void display() 
{ 
	struct Node* temp; 

	// Check for stack underflow 
	if (top == NULL)
	{ 
		cout << "\nStack Underflow"; 
		exit(1); 
	} 
	else
	{ 
		temp = top; 
		while (temp != NULL)
		{ 
			cout << temp->data << "-> "; // Print node data 
	
			temp = temp->link; // Assign temp link to temp 
		} 
	} 
} 

// Driver_Code 
int main() 
{ 
	int tolalNumber,insertNumbers,removeNumbers;
	// Push the elements of stack 
	cout<<"How many no you want add :"<<endl; //Take no of elements from user
	cin>>tolalNumber;
	cout<<"Enter your numbers :"<<endl; //Take inpute numbers from user
	for(int i=1; i<=tolalNumber; i++) {
		cin>>insertNumbers;
		push(insertNumbers);
	};
	
	display(); // Display stack elements 

	cout << "\nTop element is "<< peek() << endl; // Print top element of stack 
	
	cout<<"Enter how mmany no you want to remove :"<<endl; // Delete top elements of stack 
	
	cin>>removeNumbers; //Take input to remove numbers
		
	// Rheck inpute no of removing elements are greater than size of stack	
	if(removeNumbers<=tolalNumber) {
		for (int j=1;j<=removeNumbers;j++) {
			pop(); // Remove elements
		};	
	} else {
		cout<<"Stack Emlement are less then that you wanted to remove."<<endl;
		exit(1);
	}
	 
	display(); // Display stack elements 

	cout << "\nTop element is "<< peek() << endl; // Print top element of stack 
		
	return 0; 
};