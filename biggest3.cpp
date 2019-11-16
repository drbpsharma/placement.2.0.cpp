//WAP to input three numbers and show the biggest one.

#include<iostream>
using namespace std;
main()
{
	int a,b,c,g;
	cout <<"Enter three numbers : ";
	cin>>a>>b>>c;
	
	g=a>b && a>c ? a : b>c ? b : c;
	
	cout << "Greatest is " << g;
}

