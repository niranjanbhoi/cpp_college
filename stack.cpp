/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * Implementation of stack using singly linked list 
 * Elements should be numbers only
 */
#include <bits/stdc++.h> 
using namespace std; 

// Declare linked list node 

struct Node 
{ 
	int data; 
	struct Node* link; 
}; 

struct Node* top; 

// Utility function to add an element 
// data in the stack insert at the beginning 
void push(int data) 
{ 
	
	// Create new node temp and allocate memory 
	struct Node* temp; 
	temp = new Node(); 

	// Check if stack (heap) is ful+l. 
	// Then inserting an element would 
	// lead to stack overflow 
	if (!temp)
	{ 
		cout << "\nHeap Overflow"; 
		exit(1); 
	} 

	// Initialize data into temp data field 
	temp->data = data; 

	// Put top pointer reference into temp link 
	temp->link = top; 

	// Make temp as top of Stack 
	top = temp; 
} 

// Utility function to check if 
// the stack is empty or not 
int isEmpty() 
{ 
	return top == NULL; 
} 

// Utility function to return top element in a stack 
int peek() 
{ 
	
	// Check for empty stack 
	if (!isEmpty()) 
		return top->data; 
	else
		exit(1); 
} 

// Utility function to pop top 
// element from the stack 
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
		
		// Top assign into temp 
		temp = top; 

		// Assign second node to top 
		top = top->link; 

		// Destroy connection between
		// first and second 
		temp->link = NULL; 

		// Release memory of top node 
		free(temp); 
	} 
} 

// Function to print all the 
// elements of the stack 
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

			// Print node data 
			cout << temp->data << "-> "; 

			// Assign temp link to temp 
			temp = temp->link; 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
	int tolalNumber,insertNumbers,removeNumbers;
	// Push the elements of stack 
	cout<<"How many no you want add :"<<endl;//en
	cin>>tolalNumber;
	cout<<"Enter your numbers :"<<endl;
	for(int i=1; i<=tolalNumber; i++) {
		cin>>insertNumbers;
		push(insertNumbers);
	};
	// Display stack elements 
	display(); 

	// Print top element of stack 
	cout << "\nTop element is "<< peek() << endl; 

	// Delete top elements of stack 
	cout<<"Enter how mmany no you want to remove :"<<endl;
	
	cin>>removeNumbers;
	
//	for (int j=1;j<=removeNumbers;j++) {
//			pop();
//		};
		
	if(removeNumbers<=tolalNumber) {
		for (int j=1;j<=removeNumbers;j++) {
			pop();
		};	
	} else {
		cout<<"Stack Emlement are less then that you wanted to remove."<<endl;
		exit(1);
	}
	 

	// Display stack elements 
	display(); 

	// Print top element of stack 
	cout << "\nTop element is "<< peek() << endl; 
		
	return 0; 
} 

// This code is contributed by Striver 
