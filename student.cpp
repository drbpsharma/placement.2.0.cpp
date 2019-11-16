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
