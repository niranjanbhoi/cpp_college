/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * Implementation of publishing company which does marketing for book and audio cassette
 * versions. Create a class publication that stores the title (a string) and price (type float) of
 * a publication.
 * From this class derive two classes: book, which adds a page count (type int), and tape,
 * which adds a playing time in minutes (type float).
 * Write a program that instantiates the book and tape classes, allows user to enter data
 * and displays the data members. If an exception is caught, replace all the data member
 * values with zero values
 */
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
class publication
{
private: // private data 
 string title;
 float price;
public:
// Function To inpute data
 void inputdata()
 {
  string t;
  float p;
  cout << "Enter title of publication: ";
  cin >> t;
  cout << "Enter price of publication: ";
  cin >> p;
  title = t;
  price = p;
 }
 // function To display Data
 void displaydata()
 {
  cout << "Publication title: " << title << endl;
  cout << "Publication price: ₹" << price<<endl;
 }
};
//class book
class book :private publication
{
protected:
 int pagecount;
public:
//Function To inpute count of Book pages
 void inputdata()
 {
  publication::inputdata(); 
  cout << "Enter Book Page Count: ";
  cin >> pagecount;
 }
 //Function To display Count Of Book Pages
 void displaydata()
 {
  publication::displaydata(); 
  cout << "Book page count: " << pagecount << endl; 
 }
};
class tape :private publication
{
private:
 float ptime;
public:
//Function To inpute Tape Minutes
 void inputdata()
 {
  publication::inputdata();
  cout << "Enter playing time of the tape in minutes: ";
  cin >> ptime;
 }
 // Function To Display Tape In minutes
 void displaydata(void)
 {
  publication::displaydata();
  cout << "Playing time of the tape: " << ptime <<" minutes"<< endl;
 }
};
//Driver code
int main(){
 //declaration
 int ch;
 char a;
 book b;
 tape t;
 
       do {
        cout<<"******MENU******\n";
        cout<<"1.Accept Book Details \n2.Accept Tape details\n3.Display Book Info\n4.Display Tape Info"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        { case 1:
           b.inputdata();
           break;
          case 2:
           t.inputdata();
           break;
          case 3:
           b.displaydata();
           break;
          case 4:
           t.displaydata();
           break;
         default: cout<<"INVALID CHOICE"<<endl;}
        cout<<"Do you want to continue:(Yes-y or No-n)"<<endl;
        cin>>a;
        }while(a=='y' || a=='Y');
}

