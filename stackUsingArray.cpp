/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * C++ program to implement basic stack operations
 * Elements should be numbers only
 */
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

#define MAX 1000

class Stack {
	int top;

public:
	int arr[MAX]; // Maximum size of Stack

	Stack() { top = -1; }
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
    int display();
};

bool Stack::push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		arr[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Stack::pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = arr[top--];
		return x;
	}
}
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = arr[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}
int Stack::display(){
   if(top == -1){
      cout<<"Stack is Empty!!!"<<endl;
      }
   else{
      int i;
      cout<<"Stack elements are : ";
      for(i=top; i>=0; i--)
	  cout<<arr[i]<<" ";
   }
   return 0;
}
// Driver program to test above functions
int main()
{
	class Stack s;

    int tolalNumber,insertNumbers,removeNumbers;
	// Push the elements of stack 
	cout<<"How many no you want add :"<<endl; //Take no of elements from user
	cin>>tolalNumber;
	cout<<"Enter your numbers :"<<endl; //Take inpute numbers from user
	for(int i=1; i<=tolalNumber; i++) {
		cin>>insertNumbers;
		s.push(insertNumbers);
	};
    s.display(); //Display stack Elements

    cout << "\nTop element is "<< s.peek() << endl;// Display top Element

    cout<<"\nEnter how mmany no you want to remove :"<<endl; // Delete top elements of stack 
	
	cin>>removeNumbers; //Take input to remove numbers
		
	// Rheck inpute no of removing elements are greater than size of stack	
	if(removeNumbers<=tolalNumber) {
		for (int j=1;j<=removeNumbers;j++) {
			s.pop(); // Remove elements
		};	
	} else {
		cout<<"Stack Emlement are less then that you wanted to remove."<<endl;
		exit(1);
	}
    s.display(); //Display stack Elements

    cout << "\nTop element is "<< s.peek() << endl; // Display top Element
	//cout << s.pop() << " Popped from stack\n";

	return 0;
}
