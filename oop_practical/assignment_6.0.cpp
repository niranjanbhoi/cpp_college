/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * Implementation of Create employee bio-data using following classes 
 * i) Personal record 
 * ii))Professional record
 * iii)Academic record Assume appropriate data members and member function to accept
 * required data & print bio-data. Create bio-data using multiple inheritance using C++.
 */
#include <bits/stdc++.h>
//#include<iostream>
//#include<string.h>
//#include<stdlib.h>
using namespace std;
//class declataion for personal data
class personal
{
    protected:
    char name[20];
    char emp_id[10];
    char add[20];
    char mobile[11];
    public:
    personal()//constructor
    {
        strcpy(name,"");
        strcpy(emp_id,"");
        strcpy(add,"");
        strcpy(mobile,"");
    }
    //Function To take personal data
    void accept()
    {
        cout<<"\nEnter Personal details: ";
        cout<<"\n enter employee name";
        cin>>name;
        cout<<"\n enter employee id";
        cin>>emp_id;
        cout<<"\n enter address";
        cin>>add;
        cout<<"\n enter mobile number";
        cin>>mobile;
    }
};
//class declataion for academic data
class academic
{ 
    protected:
    int ssc;
    int hsc;
    int deg;
    public:
    academic()//constructor
    {
        ssc=0;
        hsc=0;
        deg=0;
    }
    //Function To take academic data
    void accept()
    {
        cout<<"\n enter academic details ";
        cout<<"\n";
        cout<<"\n enter marks obtain in SSC";
        cin>>ssc;
        cout<<"\n enter marks in HSSC";
        cin>>hsc;
        cout<<"\n enter marks in degree";
        cin>>deg;
    }
};
//class declataion for professional data
class professional
{
    protected:
    char organisation[10];
    char desg[10];
    int salary;
    int working_days;
    public:
    professional()//constructor
    {
        strcpy(desg,"");
        strcpy(organisation,"");
        salary=0;
        working_days=0;
    }
    void accept()
    {
        cout<<"\n enter professional details";
        cout<<"\n";
        cout<<"\n name of the organisation";
        cin>>organisation;
        cout<<"\n enter designation";
        cin>>desg;
        cout<<"\n enter salary";
        cin>>salary;
        cout<<"\n enter number of working days";
        cin>>working_days;
    }
};
//derived from above classes
class bio_data:public personal,public academic ,public professional
{
    public:
    void display()
    {
        cout<<"\n *******personal details*******";
        cout<<"\n employee id :"<<emp_id;
        cout<<"\n name :"<<name;
        cout<<"\n address :"<<add;
        cout<<"\n mobile number :"<<mobile;
        cout<<"\n *******************************";
        cout<<"\n *******academic details********";
        cout<<"\n marks in ssc :"<<ssc;
        if(ssc>=65)
        {
        cout<<"\n distinction";
        }
        else
        if((ssc<65)&&(ssc>60))
        {
        cout<<"\n first class";
        }
        else
        if(ssc<60)
        {
        cout<<"\n pass class";
        }
        cout<<"\n marks in hsc :"<<hsc;
        if(hsc>65)
        {
        cout<<"\n distingtion";
        }
        else
        if((hsc<65)&&(hsc>60))
        {
        cout<<"\n first class";
        }
        else
        if(hsc<60)
        {
        cout<<"\npass class";
        }
        cout<<"\n marks in degree :"<<deg;
        if(deg>65)
        {
        cout<<"\ndistingtion";
        }
        else
        if((deg<65)&&(deg>60))
        {
        cout<<"\n first class";
        }
        else
        if(deg<60)
        {
        cout<<"\npass class";
        }
        cout<<"\n";
        cout<<"\n *******************************";
        cout<<"\n ******professional details*****";
        cout<<"\n organisation :"<<organisation;
        cout<<"\n Designation :"<<desg;
        cout<<"\n salary :"<<salary;
        cout<<"\n working days :"<<working_days;
        cout<<"\n *******************************";
        cout<<"\n";
    }
};
//Driver code
int main()
{
    int ch;
    bio_data a;
    while(1)
    {
        cout<<"\n Enter your choice";
        cout<<"\n 1.personal details";
        cout<<"\n 2.academic details";
        cout<<"\n 3.professional details";
        cout<<"\n 4.details ";
        cout<<"\n 5.exit";
        cin>>ch;
        switch(ch)
        {
            case 1:a.personal::accept();
            break;
            case 2:a.academic::accept();
            break;
            case 3: a.professional::accept();
            break;
            case 4: a.display();
            break;
            case 5:
            exit(0);
            default: cout<<"\n wrong choice";
        }
    }
    return 0;
}

