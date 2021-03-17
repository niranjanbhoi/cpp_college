/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * Implementation of Queue using Array
 * Elements should be numbers only
 */
//#include <bits/stdc++.h>
#include <iostream> 
using namespace std;
int queue[100], n = 100;
int head = -1, tail = -1;
// Function to check Queue is Full OR NoT
int isFull() 
{ 
	return tail == n - 1; 
} 
// Function to enqueue data elements
void enqueue(int data) {
   int val;
   if (isFull())
   cout<<"Queue Overflow"<<endl;
   else {
      if (head == - 1)
      head = 0;
      tail++;
      queue[tail] = data;
   }
}
// Function to check Queue is Empty OR NoT
int isEmpty() 
{ 
	return head == - 1 || head > tail; 
} 
// Function to dequeue data elements
void dequeue() {
   if (isEmpty()) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[head] <<endl;
      head++;;
   }
}
// Function to Display all Elements
void display() {
   if (head == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = head; i <= tail; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
// Function To print HEAD Element
void headElement(){

cout<<"Head Element is : "<<queue[head]<<" ";
         cout<<endl;
}
// Function To Print TAIL Element
void tailElement(){
cout<<"Tail Element is :"<<queue[tail]<<" ";
         cout<<endl;
}
int main() {

    int tolalNumber, insertNumbers,removeNumbers;
	// Enqueue the elements of stack 
	cout<<"How many no you want add :"<<endl; //Take no of elements from user
	cin>>tolalNumber;
	cout<<"Enter your numbers :"<<endl; //Take inpute numbers from user
	for(int i=1; i<=tolalNumber; i++) {
		cin>>insertNumbers;
		 enqueue(insertNumbers); //Insert data into Queue
	};

// enqueue(77);
display();// Display queue elements 
headElement(); // Display queue elements 
tailElement(); // Display queue elements 
cout<<"Enter how mnany no you want to remove :"<<endl; // Delete top elements of stack 
	
	cin>>removeNumbers; //Take input to remove numbers
		
	// Rheck inpute no of removing elements are greater than size of stack	
	if(removeNumbers<=tolalNumber) {
		for (int j=1;j<=removeNumbers;j++) {
			dequeue(); // Remove elements
		};	
	} else {
		cout<<"Stack Emlement are less then that you wanted to remove."<<endl;
		exit(1);
	}
display();// Display queue elements
headElement(); // after dequeue Display dequeue elements 
tailElement(); // after dequeue Display dequeue elements 
 
return 0;
}