#include<iostream>
using namespace std;
int main()
{
	int a=4,b=12,i,gcd;
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	cout<<"Gcd="<<gcd;
	return 0;
	
}