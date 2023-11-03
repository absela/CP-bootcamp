#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long h=(-1+sqrt(1+(8*n)))/2;
    cout << h;
}