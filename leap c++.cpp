
#include <iostream>
using namespace std;
int main()
{
	int year=2024;
	if (year % 4==0||year%100!=0||year%400==0) 
	{
		cout<<year<<"is leap year";	
	}
	else
	{
		cout<<year<<"not leap year";
	}
	return 0;
}