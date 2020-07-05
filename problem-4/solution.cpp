#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
	string a = to_string(n);
	string b = a;
	reverse(a.begin(),a.end());
	return (a==b);
}

int main()
{	
	int largestPalindrome =0;
	int a = 999;
	while(a>=100)
	{
		int b =999;
		while(b>=a)
		{
			if(a*b<=largestPalindrome) break;
			if(isPalindrome(a*b)) largestPalindrome = a*b;
			b--;
		}
		a--;
	}
	cout<<largestPalindrome<<endl;
	return 0;
}

