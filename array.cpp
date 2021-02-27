/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * performe CURD operation on array
 * Elements should be numbers only
 */
#include <bits/stdc++.h>
//#include <iostream> 
using namespace std; 

// Function to insert element in arr at position pos 
int* insertelement(int n, int arr[], int element, int pos) { 
	
    int i; 

	n++; // increase the size by 1 

	// shift nunmbers to forward direction
	for (i = n; i >= pos; i--) 

		arr[i] = arr[i - 1]; 

	
	arr[pos - 1] = element; // insert element at pos 

	return arr; 
} 

int findElement(int arr[], int n,  
                int key);  
  
// Function to delete an element  
int deleteElement(int arr[], int n,  
                int key)  
{  
    // Find position of element to be deleted  
    int pos = findElement(arr, n, key);  
  
    if (pos == - 1)  
    {  
        cout << "Element not found";  
        return n;  
    }  
  
    // Deleting element  
    int i;  
    for (i = pos; i < n - 1; i++)  
        arr[i] = arr[i + 1];  
  
    return n - 1;  
}  
  
// Function to implement search operation  
int findElement(int arr[], int n, int key)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        if (arr[i] == key)  
            return i;  
  
    return - 1;  
} 

// Driver Code 
int main() 
{ 
	int arr[100] = { 0 }; 
	int i, element, pos, key, tolalNumber, insertNumbers; 
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"How many no you want add :"<<endl; //Take no of elements from user
	
    cin>>tolalNumber;
	
    cout<<"Enter your numbers :"<<endl; //Take inpute numbers from user
	
    for(int i=0; i<=tolalNumber-1; i++) {
		cin>>insertNumbers;
		arr[i] = insertNumbers ; // initial array from user input
	};

	// Display the original Array 
	for (i = 0; i < tolalNumber; i++) 
		cout << arr[i] << " "; 
	cout << endl; 

	// element to be inserted 
    cout<<"Enter Number that you want to insert :"<<endl; 
    
    cin>>element;

	// position at which element is to be inserted
    cout<<"Enter position where you want to insert Element :"<<endl; 
    
    cin>>pos; // Taking user input for inserting position
	
    // Check Position of element 
    if ( pos==0 ) {
        cout<<"Position should not be ZERO";
        exit(1);
    } else {
        insertelement(tolalNumber, arr, element, pos);
    }
 
	// Display updated Array
    cout << "Array after Insertion"<<endl; 
	for (i = 0; i < tolalNumber + 1; i++) 
		cout << arr[i] << " "; 
	cout << endl; 

    //Delete element that you want
    cout<<"Enter Enement which you want to delete :"<<endl; 
    
    cin>>key; // Taking user input for key 
    deleteElement(arr, n, key);
        
    // Display updated Array    
    cout << "Array after deletion"<<endl;  
    for (i = 0; i < tolalNumber; i++)  
        cout << arr[i] << " "; 

	return 0; 
} 
