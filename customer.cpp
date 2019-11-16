#include<iostream>
#include<string.h>
using namespace std;
class Customer
{
	private:
		int cid;
		char name[51];
		double balance;
	public:
		Customer(int cid, char *name, double openingamount)
		{
			this->cid=cid;
			strcpy(this->name,name);
			this->balance=openingamount;	
		}	
		void setName(char *name)
		{
			strcpy(this->name,name);
		}
		int getCid()
		{
			return cid;
		}
		char *getName()
		{
			return name;
		}
		double getBalance()
		{
			return balance;
		}
		void deposit(double amount)
		{
			balance=balance+amount;
		}
		void withdraw(double amount)
		{
			balance=balance-amount;
		}
};
main()
{
	Customer c1(123,"Rakesh Kumar",6000);
	c1.deposit(3500);
	
	Customer *c2=new Customer(124,"Vikas Kumar",9000);
	c2->withdraw(1500);
	
	cout <<"Balance of "<<c1.getName() << " having customer id " << c1.getCid() << " is " << c1.getBalance() << "\n";
	cout <<"Balance of "<<c2->getName() << " having customer id " << c2->getCid() << " is " << c2->getBalance() << "\n";	
}
