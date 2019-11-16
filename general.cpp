#include<iostream>
#include<math.h>
using namespace std;
class General
{
	private: 
		int num;
	public:
		General(int num)
		{
			this->num=num;	
		}	
		void setNum(int num)
		{
			this->num=num;
		}
		int getNum()
		{
			return num;
		}
		int factorial()
		{
			int f=1,i;
			for(i=1;i<=num;i++)
				f=f*i;
			return f;
		}
		double cubeRoot()
		{
			return pow(num,1.0/3);
		}
};
main()
{
	int n;
	cout << "Enter a number : "; cin >> n;
	General g(n);
	
	cout <<"Factorial of " << g.getNum() << " is " << g.factorial() << "\n";
	cout <<"Cube root of " << g.getNum() << " is " << g.cubeRoot();	
	
}
