#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>

using namespace std;


int main(){
    int n; cin >> n;
    vector < vector <int> > adj(n, vector <int > (n, false));
    map <int, int> s;
    map <int, int> so;
    for (int i = 0; i < n; i++) {
        s[i + 1] =  i + 1;
        so[i + 1] =  i + 1;
    }
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            int a; cin >> a;
            if (a) {
                adj[i][j] = true;
                s.erase(j + 1);
                so.erase(i + 1);
            }
        }
    }
    cout << s.size() << " ";
    for (map <int, int>::iterator it = s.begin(); it != s.end(); it++)
        cout << it->first << " ";
    cout << endl;
    cout << so.size() << " ";
    for (map <int, int>::iterator it = so.begin(); it != so.end(); it++)
        cout << it->first << " ";
    cout << endl;
}