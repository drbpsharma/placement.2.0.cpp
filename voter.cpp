//Write a program to input name and age of a person and check it to be valid voter.

#include<iostream>
using namespace std;
main()
{
	cout << "Enter your name "; 
	char name[51]; cin >> name;
	cout << "Enter your age ";
	int age; cin >> age;
	if(age>=18)
		cout <<"Dear " << name << " you can vote";
	else
		cout <<"Dear " << name << " you cannot vote";
}
