/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * Implementation of q User defined exception to check the following conditions and throw the exception
 * if the criterion does not meet.
 * a. User has age between 18 and 55
 * b. User stays has income between Rs. 50,000 – Rs. 1,00,000 per month
 * c. User stays in Pune/ Mumbai/ Bangalore / Chennai
 * d. User has 4-wheeler
 * Accept age, Income, City, Vehicle from the user and check for the conditions mentioned above.
 * If any of the condition not met then throw the exception
 */
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
class user
{
  int age;
  float income;
  string city,vehicle;
public:
    void ip();
    void checkage();
    void checkincome();
    void checkcity();
    void checkvehicle();
    void op();
};
//Function To Inpute data
void user::ip()
{
    cout<<endl<<"ENTER AGE OF USER(18 to 55): ";
    cin>>age;
    cout<<"ENTER INCOME OF USER(Rs 50,000 - 1,00,000 /-): ";
    cin>>income;
    cout<<"ENTER CITY OF USER(pune/mumbai/bangalore/chennai): ";
    cin>>city;
    cout<<"ENTER VEHICLE USED BY USER(four): ";
    cin.ignore();
    getline(cin,vehicle);

}
//Function To check age
void user::checkage()
{
    try
    {
        if(age<18 || age>55)
            throw age;
    }
    catch(int i)
    {
        cout<<endl<<"AGE DOES NOT MEETS THE CRITERION\n";
    }
}
//Function To check city
void user::checkcity()
{
    int flag=0;

    try
    {
        if((city.compare("pune")==0) || (city.compare("mumbai")==0) || (city.compare("bangalore")==0) || (city.compare("chennai")==0))
            flag=1;
        if(flag==0)
        {
            throw city;
        }
    }
    catch(string v)
    {
        cout<<endl<<"CITY DOES NOT MEETS THE CRITERION\n";
    }
}
//Function To check income
void user::checkincome()
{
    try
    {
        if(income>100000 || income<50000)
            throw income;
    }
    catch(float t)
    {
        cout<<endl<<"INCOME DOES NOT MEETS THE CRITERION\n";
    }
}
//Function To check vehical
void user::checkvehicle()
{
    char x;
    try
    {
        if(vehicle.compare("four wheeler")!=0)
            throw x;
    }
    catch(char c)
    {
        cout<<endl<<"VEHICLE DOES NOT MEETS THE CRITERION\n";
    }
}
//Function To Display data
void user::op()
{
    cout<<endl<<"AGE: "<<age<<endl<<"INCOME: "<<income<<endl<<"CITY: "<<city<<endl<<"VEHICLE: "<<vehicle<<endl;
}
//Driver code
int main()
{
    user o;
    o.ip();
    o.op();
    o.checkage();
    o.checkincome();
    o.checkcity();
    o.checkvehicle();

    return 0;
}
