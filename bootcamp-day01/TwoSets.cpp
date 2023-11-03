#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long x;
    vector<int>v;
    vector<int>v2;
    x = (n*(n+1))/2;
    if (x % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    x = x/2;
    for(int i=n;i>=1;i--)
    {
        if (x - i >= 0)
        {
            v.push_back(i);
            x = x - i;
        }
        else
        {
            v2.push_back(i);
        }
    }
    cout << "YES" << endl;
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    cout << endl;
    cout << v2.size() << endl;
    for(int i=0;i<v2.size();i++)
        cout << v2[i] << " ";
    cout << endl;
}