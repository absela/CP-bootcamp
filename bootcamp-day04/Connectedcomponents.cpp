#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int> > v(n);
    for(int i = 0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                v[i].push_back(j);
            }
        }
    }

    vector<bool> vis(n,0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i]) continue;
        
        queue<int>q;
        q.push(i);
        vis[i] = true;
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            for(int o: v[x])
            {
                if (vis[o]){
                    continue;
                }
                q.push(o);
                vis[o] = true;
            }
        }
        cnt++;
    }
    cout << cnt << endl;
}