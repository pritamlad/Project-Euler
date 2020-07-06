#include<bits/stdc++.h>
using namespace std;

vector<int> generatePrimes(int n)
{
	vector<int> primes;
	bool isPrime;
	int j;
	primes.push_back(2);
	for (int i = 3; i <= n; i += 2) {
        j = 0;
        isPrime = true;
        while (primes[j]*primes[j] <= i) {
            if (i % primes[j] == 0) {
                isPrime = false;
                break;
            }
            j++;
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
 
    return primes;
}

int main()
{	
	int divisorMax = 20;
	vector<int> p = generatePrimes(divisorMax);
	int result = 1;
 
	for (int i = 0; i < (int)p.size(); i++) 
	{
		int a = (int) (log(divisorMax) /log(p[i]));
		result = result * ((int)pow(p[i],a));
	}
	cout<<result<<endl;				
	return 0;
}

