#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n,sum=0;
    cin >> n;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(size_t i = 1;i<v.size();i++)
    {
        if (v[i-1] > v[i])
        {
            sum += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    cout << sum << endl;
}