#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip> 
using namespace std;


const long long MOD = 1e9+7;

typedef long long ll;

long long power(long long a,long long b)
{
    if (b == 0) return 1;
    if (b == 1) return a;
    ll tmp = (power(a, b / 2)%MOD);
    if (b % 2 == 0) return ((tmp * tmp )%MOD);
    else return (((tmp * tmp)%MOD )* a)%MOD;
}

int main()
{
    ll n,q;
    cin >> n >> q;
    vector<ll>v(n+1);
    v[0]=1;
    for(ll i=0;i<n;i++)
    {
        ll a; cin >> a;
        v[i + 1] = (v[i] * a) % MOD;
    }
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        cout << (v[r]*(power(v[l-1],MOD -2)%MOD))%MOD << endl;
    }
}