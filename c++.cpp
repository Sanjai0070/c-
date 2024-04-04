#include <stdio.h>
int main()
{
	int a=4,b=12,lcm,gcd,i;
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	lcm=a*b/gcd;
	printf("gcd=%d\n",gcd);
	printf("lcm=%d",lcm);
	return 0;
}
