/*
Create a class Student having data members admissionno, name, course and fees. Create a constructor to initialize data of a student. Create setter functions to modify the data in the data members where required. Create getter functions to return the value in the data members.

Create two references for two instances of Student class
reference r with sample data having admissionno as 2017bcs1101, name as Rohit Sharma, course as B.Tech. (CSE) and fees as 145000
reference s with sample data having admissionno as 2017bec1009, name as Suresh Verma, course as B.Tech. (ECE) and fees as 140000

Show the output as follows

Rohit Sharma from B.Tech. (CSE) having admission number 2017bcs1101 has paid fees Rs. 145000
Suresh Verma from B.Tech. (ECE) having admission number 2017bec1009 has paid fees Rs. 140000

Update the course of Rohit Sharma to B.Tech. (ME) and fees to 135000 and show the new output

Rohit Sharma from B.Tech. (ME) having admission number 2017bcs1101 has paid fees Rs. 135000
*/

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		//creating data members
		char admissionno[12],name[51], course[51];
		int fees;
	public:
		//creating the constructor
		Student(char *adno, char *nm, char *cs, int fs)
		{
			strcpy(admissionno,adno);
			strcpy(name,nm);
			strcpy(course,cs);
			fees=fs;
		}
		//creating setters
		void setAdmssionNo(char *adno)
		{
			strcpy(admissionno,adno);
		}
		void setName(char *nm)
		{
			strcpy(name,nm);
		}
		void setCourse(char *cs)
		{
			strcpy(course,cs);
		}
		void setFees(int fs)
		{
			fees=fs;
		}
		
		//Creating getters
		char *getAdmissionNo()
		{
			return admissionno;
		}
		char *getName()
		{
			return name;
		}
		char *getCourse()
		{
			return course;	
		}
		int getFees()
		{
			return fees;
		}
};
main()
{
	//Creating instance and its reference using constructor
	
	Student r("2017bcs1101","Rohit Sharma","B.Tech. (CSE)",145000);
	Student s("2017bec1009","Suresh Verma","B.Tech. (ECE)",140000);
	
	cout << r.getName() << " from " << r.getCourse() << " having admission number " << r.getAdmissionNo() << " has paid Rs. " << r.getFees() << "\n";
	cout << s.getName() << " from " << s.getCourse() << " having admission number " << s.getAdmissionNo() << " has paid Rs. " << s.getFees() << "\n";
	
	r.setCourse("B.Tech. (ME)");
	r.setFees(135000);
	cout << r.getName() << " from " << r.getCourse() << " having admission number " << r.getAdmissionNo() << " has paid Rs. " << r.getFees();	
}
