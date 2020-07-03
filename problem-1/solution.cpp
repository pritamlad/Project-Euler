#include<bits/stdc++.h>
using namespace std;

int target = 999;
int sumDivisibleBy(int n)
{
	int p = target / n;
	return n*(p*(p+1))/2;
}


int main()
{	
	/*int ans =0;
	for(int i=1; i<1000; i++)
	{
		if(i%3==0 || i%5==0) ans+=i;
	}
	cout<<ans<<endl;
	*/
	cout<<sumDivisibleBy(3)+sumDivisibleBy(5)-sumDivisibleBy(15)<<endl;;
	return 0;
}
