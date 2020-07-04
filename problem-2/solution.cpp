#include<bits/stdc++.h>
using namespace std;

int main()
{	
	//A direct translation of the problem statement would be a program like this
	/*
	int a=1,b=2;
	int sum =0,temp;
	while(b<4000000)
	{
		if(b%2==0) sum+=b;
		temp=a+b;
		a=b;
		b=temp;
	}
	cout<<sum<<endl; 
	*/
	
	
	//It is easy to prove that every third Fibonacci number is even.
	/*
	int a =1, b=1;
	int sum = 0, limit = 4000000, c =a+b;
	while(c<limit)
	{
		sum+=c;
		a = b+c;
		b = c+a;
		c = a+b;
	}
	cout<<sum<<endl;
	*/
	
	//If we only write the even numbers:2 8 34 144...
	//it seems that they obey the following recursive relation: E(n)=4*E(n-1)+E(n-2)
	
	int a =2, b=8;
	int sum = 10, limit = 4000000, c =4*b+a;
	while(c<limit)
	{
		sum+=c;
		a = b;
		b = c;
		c = 4*b+a;
	}
	cout<<sum<<endl;
	return 0;
}

