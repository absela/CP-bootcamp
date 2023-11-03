#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip> 
using namespace std;
typedef long long ll;

bool cp(const vector<int>& m, int t, ll ser) {
    ll sum = 0;
    for (int time : m) {
        sum += min(ser / time, (ll)t); 
    }
    return sum >= t;
}

int main() {
    int n, t;cin >> n >> t;
    vector<int> m(n);
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
    }
    ll l = 1, r = 1e18; 
    ll count = r;

    while (l <= r) {
        ll mid = (l + r) / 2;
        if (cp(m, t, mid)) {
            count = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << count << endl;
}