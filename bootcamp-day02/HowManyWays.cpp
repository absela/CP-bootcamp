#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long power(long long a,long long b)
{
    if (b == 0) return 1;
    if (b == 1) return a;
    long long tmp = (power(a, b / 2));
    if (b % 2 == 0) return ((tmp * tmp )%1000000007);
    else return (((tmp * tmp) )* a)%1000000007;
}

int main()
{
    long long n;
    cin >> n;
    cout << power(3,n);
}