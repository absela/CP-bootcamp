#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int binarysearch(vector<int> &x, int c)
{
    int l = 0;
    int r = x.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (x[m] == c)
        {
            return m;
        }
        else if (x[m] < c)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;


    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int m;
    cin >> m;

    vector<int>u(m);
    for(int i = 0; i < m; i++)
    {
        cin >> u[i];
    }
    for(int i = 0; i < m; i++)
    {
        if (binarysearch(v,u[i]) == -1)
            cout << "NO" <<endl;
        else    cout << "YES"<< endl;
    }
}