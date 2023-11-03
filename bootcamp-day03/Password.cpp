#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
int fact(int n){
    int e=1;
    for(int i=1;i<=n;i++)
    {
        e*=i;
    }
    return e;
}

int take(int k,int n){
    return fact(n)/(fact(k) * fact(n-k));
}

int main()
{
    int n;cin>>n;
    while(n--)
    {
        int k;cin>>k;
        for(int i=0;i<k;i++)
        {
            int x;cin>>x;
        }
        k=10-k;
        cout<<take(2,k)*(fact(4)/(2*fact(2))) << endl;

    }
}