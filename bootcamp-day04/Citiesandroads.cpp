
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    int n; cin >> n;
    vector <vector<int>> vis(n);
    int cnt = 0;

    for (int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++){
           int a; cin >> a;
           if (a)
           {
                cnt++;
                vis[i].push_back(j);

           }
        }
    }
    cout << cnt / 2 << endl;
}