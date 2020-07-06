#include<bits/stdc++.h>
using namespace std;

int main()
{	
	long long sum=0,sqr=0;;
	int n =100;
	sum = n*(n+1)/2;
	sqr = n*(n+1)*(2*n+1)/6;
	cout<<sum*sum-sqr<<endl;				
	return 0;
}

