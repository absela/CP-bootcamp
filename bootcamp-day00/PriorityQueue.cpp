#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    vector<priority_queue<int> >s;
    for (int i = 0; i < n; i++)
    {
        priority_queue<int> q;
        s.push_back(q);
    }
    for(int j=0;j<x;j++){
        int a,b;
        cin >> a >> b;
        if (a == 0)
        {
            int x;
            cin >> x;
            s[b].push(x);
        }
        else if (a == 1)
        {
            if (!s[b].empty())
            {
                cout << s[b].top() << endl;
            }
        }
        else if (a == 2)
        {
            if (!s[b].empty())
            {
                s[b].pop();
            }
        }
    }
}