#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n =  600851475143;
	int factor, lastFactor, maxFactor;
	if (n%2==0)
	{
		lastFactor = 2;
		n /= 2;
		while(n%2==0)
		{
			n /=2;
		}
	}
	else lastFactor = 1;
	
	factor = 3;
	maxFactor = sqrt(n);
	while (n>1 and factor<=maxFactor)
	{
		if(n%factor==0)
		{
			n /= factor;
			lastFactor = factor;
			while (n%factor==0)
			{
				n /= factor;
			}
		}
		factor += 2;
	}
	
	if(n==1) cout<<lastFactor;
	else cout<<n<<endl;
	
	return 0;
}

