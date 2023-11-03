#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>


using namespace std;
vector<long long>v;
void primeFactors(long long n)
{
	while (n % 2 == 0)
	{
		v.push_back(2);
		n = n/2;
	}
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			v.push_back(i);
			n = n/i;
		}
	}
	if (n > 2)
		v.push_back(n);
}

int main()
{
	long long n ;
    cin >> n;
    cout << n << ": ";
	primeFactors(n);
    for(int i=0;i<v.size()-1;i++)
    {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
	return 0;
}