#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip> 
using namespace std;

typedef long long ll;

ll power(ll n,int p,int mod)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
        {
            ans=(ans*n)%mod;
        }
        n=(n*n)%mod;
        p=p>>1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int mod=1e9+7;
        int a,b,c;
        cin >> a >> b >> c;
        ll ans=power(b,c,mod-1);
        cout << power(a,ans,mod) << " ";
    }
}
