#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

long long MOD = 1e9 + 7;

using namespace std;

long long power(long long a,long long b)
{
    if (b == 0) return 1;
    if (b == 1) return a;
    long tmp = (power(a, b / 2)%MOD);
    if (b % 2 == 0) return ((tmp * tmp )%MOD);
    else return (((tmp * tmp)%MOD )* a)%MOD;
}

long long inv(int k)
{
    return power(k,MOD-2);
}

int main()
{
    string a;
    cin >> a;
    int n = a.size();
    map<char ,int>m;
    for(int i = 0;i<n;i++)
    {
        m[a[i]]++;
    }
    int f[n+1];
    f[0] = 1;

    for(long long i= 1; i<=n ;i++)
    {
        f[i] = (f[i-1]*i)%MOD;
    }
    long long res = f[n];
    for(auto i:m)
    {
        res = (res*inv(f[i.second]))%MOD;
    }
    cout << res << endl;
}