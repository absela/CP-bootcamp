#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip> 
#define mod 998244353
using namespace std;

int main()
{
    long long a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    long long sum1 = ((a%mod)*(b%mod))%mod;
    sum1 = (sum1*(c%mod))%mod;
    long long sum2 = ((d%mod)*(e%mod))%mod;
    sum2 = (sum2*(f%mod))%mod;
    cout << (sum1+mod-sum2)%mod << endl;
}