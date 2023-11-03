#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long power(long long a,long long b)
{
    if (b == 0) return 1;
    if (b == 1) return a;
    long tmp = (power(a, b / 2)%1000000007);
    if (b % 2 == 0) return ((tmp * tmp )%1000000007);
    else return (((tmp * tmp)%1000000007 )* a)%1000000007;
}

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin >> a >> b;
        a = a %1000000007;
        cout << power(a,b) << endl;
    }
}