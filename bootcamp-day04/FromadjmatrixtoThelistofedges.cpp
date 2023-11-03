#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>

using namespace std;


int main(){
    int n; cin >> n;
    vector <vector<int> > adj(n);
    vector <vector<bool> > vis(n, vector<bool>(n, false));
    int counter = 0;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            int a; cin >> a;
            if (a && !vis[i][j] && !vis[j][i]) {
                vis[j][i] = true;
                vis[i][j] = true;
                adj[i].push_back(j);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < adj[i].size(); j++) {
            cout << i + 1 << " " << adj[i][j] + 1 << endl;
        }
    }
}