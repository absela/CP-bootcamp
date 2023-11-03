#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

long long MOD = 1e9 + 7;

using namespace std;

long long power(long long a,long long b)
{
    if (b == 0) return 1;
    if (b == 1) return a;
    long tmp = (power(a, b / 2)%1000000007);
    if (b % 2 == 0) return ((tmp * tmp )%1000000007);
    else return (((tmp * tmp)%1000000007 )* a)%1000000007;
}

long long inv(int n){
    return power(n,MOD-2);
}

long long fact[1000001],inver[1000001];

long long take(int k,int n){
    return (((fact[n]*inver[k])%MOD)*inver[n-k])%MOD;
}

void befo(){
    fact[0] = 1;
    for(int i = 1;i<=1000000;i++){
        fact[i] = (fact[i-1]*i)%MOD;
    }
    inver[1000000] = inv(fact[1000000]);
    for(int i = 999999;i>=0;i--){
        inver[i] = (inver[i+1]*(i+1))%MOD;
    }
}

int main()
{
    befo();
    int n; cin >> n;
    while(n--){
        int a,b;cin>>a>>b;
        cout << take(b,a)<< endl;
    }
}