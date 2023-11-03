#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define int long long
#define int_ int32_t


int_ main()
{
    int n, target; cin >>n >> target;
    vector<int> v(n);
    map<int, int> m;
    int sum = 0;
    int subs = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        if (sum == target)
            subs++;
        if (m.find(sum - target) != m.end())
            subs += m[sum - target];
        m[sum] += 1;
    }
    cout << subs << endl;
}