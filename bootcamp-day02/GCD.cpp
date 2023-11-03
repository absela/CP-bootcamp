#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <iomanip> 
using namespace std;


const long long MOD = 1e9+7;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    vector<ll>v1(n+1);
    vector<ll>v2(n+1);
    v1[0]=v[0];
    v2[n-1]=v[n-1];
    for(int i=1;i<n;i++)
    {
       v1[i] = gcd(v1[i-1], v[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        v2[i]=gcd(v2[i+1], v[i]);
    }
    ll count = max(v1[n-2], v2[1]);
	for (int i = 0; i < n-2; i++) {
		count = max(count, gcd(v1[i], v2[i+2]));
	}
	cout << count << '\n';
}