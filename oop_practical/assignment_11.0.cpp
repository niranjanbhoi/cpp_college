/*
 * Author: Niranjan Ramesh Bhoi
 * https://github.com/kimm-cs/cpp_college/
 * Implementation of a C++ to use map associative container. The keys will be the names of
 * states, and the values will be the populations of the states. When the program runs, the
 * user is prompted to type the name of a state. The program then looks in the map, using
 * the state name as an index, and returns the population of the state. 
 */
#include <bits/stdc++.h>
//#include<iostream>
//#include <map>
//#include<string>
using namespace std;
//Driver code
int main()
{
	string country;
	int population;
	char ans = 'y';
	int choice;
	map<string,int> m;
	map<string,int>::iterator i;
	do
	{
		cout << "\n Main Menu";
		cout << "\n1. Insert an element";
		cout << "\n2. Display";
		cout << "\n3. Search an state";
		
		cout << "\n Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:cout << "\n Enter the name of state: ";
			cin >> country;
			cout << "\n Enter the population(in Cr): ";
			cin >> population;
			m.insert(pair<string,int>(country,population));
			break;
		case 2:cout << "State and Populations are:  ";
			for (i = m.begin(); i != m.end(); i++)//i is for iterator
				cout <<"[" <<(*i).first << ", "<<(*i).second<<"] ";
			break;
		case 3:cout << "\n Enter the name of state for searching its population: ";
			cin >> country;
			if(m.count(country)!=0) // first represents key and second represents value
				cout << "Population is " << m.find(country)->second<<"Cr";
			else
				cout << "State is not present in the list" << endl;
			break;		
		}
		cout << "\n Do you want to continue?(y/n): ";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	return 0;
}
