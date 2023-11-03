#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>

using namespace std;
#define max 202020

vector<vector<int>> adj(max);
vector<int>subtree_size(max);

int calcule(int node) {
   if (adj[node].size() == 0) {
      return 1;
   } else {
       for (int i = 0; i < adj[node].size(); i++) {
          subtree_size[node] += calcule(adj[node][i]);
       }
   }
   return subtree_size[node] + 1;
}

int main() {
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++) {
      int boss;
      cin >> boss;
      adj[boss].push_back(i);
  }
  calcule(1);
  for (int i = 1; i <= n; i++) {
      cout << subtree_size[i] << " ";
  }
  return 0;
}