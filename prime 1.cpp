#include<iostream>
using namespace std;
int main()
{
	int i,n,a=21;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		a=a+1;
		cout<<"\n"<<a;
	}
	if(a==2)
	cout<<a<<" is prime";
	else
	cout<<a<<" is not prime";
	return 0;
}