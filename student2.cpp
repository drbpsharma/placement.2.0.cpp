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
		Student(char *admissionno, char *name, char *course, int fees)
		{
			strcpy(this->admissionno,admissionno);
			strcpy(this->name,name);
			strcpy(this->course,course);
			this->fees=fees;
		}
		//creating setters
		void setAdmssionNo(char *admissionno)
		{
			strcpy(this->admissionno,admissionno);
		}
		void setName(char *name)
		{
			strcpy(this->name,name);
		}
		void setCourse(char *course)
		{
			strcpy(this->course,course);
		}
		void setFees(int fees)
		{
			this->fees=fees;
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
	
	Student *r=new Student("2017bcs1101","Rohit Sharma","B.Tech. (CSE)",145000);
	Student *s=new Student("2017bec1009","Suresh Verma","B.Tech. (ECE)",140000);
	
	cout << r->getName() << " from " << r->getCourse() << " having admission number " << r->getAdmissionNo() << " has paid Rs. " << r->getFees() << "\n";
	cout << s->getName() << " from " << s->getCourse() << " having admission number " << r->getAdmissionNo() << " has paid Rs. " << s->getFees() << "\n";
	
	r->setCourse("B.Tech. (ME)");
	r->setFees(135000);
	cout << r->getName() << " from " << r->getCourse() << " having admission number " << r->getAdmissionNo() << " has paid Rs. " << r->getFees();	
}
