#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    int max = 0;
    string maxs;
    for (map<string,int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if (it->second >= max)
        {
            max = it->second;
            maxs = it->first;
        }
    }
    cout << maxs << " "<< max << endl;
    return 0;
}
