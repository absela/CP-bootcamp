#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    pair<int,int>s;
    vector<pair<int,int> > v;
    for (int i = 0; i < n; i++)
    {
        cin >> s.first;
        s.second = i+1;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    int i = 0;
    int j = n-1;
    while (i < j)
    {
        if (v[i].first + v[j].first == x)
        {
            cout << v[j].second << " " << v[i].second << endl;
            return 0;
        }
        else if (v[i].first + v[j].first < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}