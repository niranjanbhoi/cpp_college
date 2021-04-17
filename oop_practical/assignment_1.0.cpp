/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * Implementation of a class Complex which represents the Complex Number data type. Implement the following
 * 1. Constructor (including a default constructor which creates the complex number 0+0i).
 * 2. Overloaded operator+ to add two complex numbers.
 * 3. Overloaded operator* to multiply two complex numbers.
 * 4. Overloaded << and >> to print and read Complex Numbers.
 * Elements should be numbers only
 */
//#include <bits/stdc++.h>
#include <iostream>
#include<stdlib.h>
using namespace std;
class complex
{
    int r;
    float i;
public:
//default constructor
    complex()
    {
        r=0;
        i=0.0;
    }
//parametrized constructor
    complex(int temp1,float temp2)
        {

            r=temp1;
            i=temp2;
        }
//operator overloading << (display)
friend void operator <<(ostream& o,complex& a)
{
    o<<a.r<<"+"<<a.i<<"i";  
}
// operator >> overloaded & values are accepted
friend istream  &operator >> (istream & in ,complex & b)
{
cout<<"\nplease enter complex no(real,imag)";
in>>b.r>>b.i;
return in;
}
// Addition by + operator overloding
complex operator + (complex&A)
{
           complex B;
            B.r=r+A.r;
        B.i=i+A.i;
        return B;
}
//* operator overloaded
complex operator *(complex & c)
{
complex result;
result.r=r-c.r;
result.i=i-c.i;
result.r=((r)*(c.r))-((i)*(c.r));
result.i=((r)*(c.i))+((c.r)*(i));
return result;
}
};
//Driver code
int main()
{
    //Object declaration
    complex A,B,C,D(10,20.5);
    int ch;
    //while loop
    while(1)
    {
    cout<<"\n.Menu:";
    cout<<"\n1.Default constructor";
    cout<<"\n2.Parameterised constructor";
    cout<<"\n3.Accept number";
    cout<<"\n4.Display number";
    cout<<"\n5.Addition:";
    cout<<"\n6.multiplication:";
    cout<<"\n Enter your choice:";
    cin>>ch;
    //switch case
    switch(ch)
    {
    case 1:
    cout<<A;
    break;
    case 2:
    cout<<D;
    break;
    case 3:
      cin>> A;
      cin>> B;
      break;
    case 4:
      cout<<A;
      cout<<B;
      break;
    case 5:
      C=A+B;
      cout<<C;
      break;
    case 6:
      C= A*B;
      cout<<C;
      break;
    case 7:  exit(0);
    }
  }
}


