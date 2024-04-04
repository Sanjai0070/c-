#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b;
	cout<<"enter a number:";
	cin>>a;
	if(a>=0)
	{
		b=cbrt(a);
		cout<<"cube root of: "<<a<<" is "<<b;
	}
	else
	{
		cout<<"negative number, invalid";
	}
	return 0;
}