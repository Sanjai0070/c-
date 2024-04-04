#include<iostream>
using namespace std;
int main()
{
	int num=121,ori,result=0,rem;
	ori=num;
	while(num!=0)
	{
		rem=num%10;
		result=result*10+rem;
		num/=10;
	}
	if(result==ori)
	{
		cout<<ori<<" is an pallindrome";
	}
	else
	{
		cout<<ori<<" is not an pallindrome";
	}
	return 0;
}