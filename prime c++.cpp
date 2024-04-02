#include <iostream>
using namespace std;

int isPrime(int n)
{
	
	if (n <= 1)
		return false;

	
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;

	return true;
}


int main()
{
	int n=7;
	isPrime(n) ? cout << " true\n" : cout << " false\n";
	
	return 0;
}
