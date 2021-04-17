/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * Implementation of a C++ program create a calculator for an arithmetic operator (+, -, *, /). The
 * program should take two operands from user and performs the operation on those two
 * operands depending upon the operator entered by user. Use a switch statement to select
 * the operation. Finally, display the result.
 */
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
class calculator
{int num1,num2,result; 
char choice;
public:
// Function to accept data
void accept()
{
    cout<<"Enter number_1 and number_2: ";
    cin>>num1;
    cin>>num2;
}
// Function To perform calculator Operation
void operation()
{
    cout<<"1)Enter your choice + for Addition "<<"\n";
    cout<<"2)Enter - for Subtraction "<<"\n";
    cout<<"3)Enter * for Multiplication"<<"\n";
    cout<<"4)Enter / for Division"<<"\n";
    cin>>choice;
    switch(choice)
    {
        case '+' :
        result=num1+num2;
        cout << "Addioton is " <<result<< endl; 
        break;
              
        case '-' :
        result=num1-num2;
        cout << "Subtraction is " <<result<< endl; 
        break;
                        
        case '*' :
        result=num1*num2;
        cout << "Multiplication is " <<result<< endl; 
        break;
        case '/' :
        result=num1/num2;
        cout << "Division is " <<result<< endl; 
        break;
                  
        default :
        cout << "Invalid Operation" << endl;
    }
}
};
int main()
{ 
    calculator c;
    char ch;
    while(1)
  {
    c.accept();
    c.operation();
    cout<<"\nDo you want to continue(y/n):";
    cin>>ch;
    if(ch=='n')
    {break;}
 }
return 0;
}