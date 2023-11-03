#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>


using namespace std;

struct segTree {
    long long identity = 0;
    long long fn(long long a, long long b) {
        return a + b;
    }
    long long n;
    vector<long long> all;
    vector<long long> s;
    segTree(vector<long long> &a) {
        n = a.size();
        s.resize(4 * n, identity);
        all = a;
        build(1, 0, n-1, 0, n-1);
    }
    void build(long long node, long long start, long long end, const long long l, const long long r) {
        if (start > r || end < l)
            return ;
        if (start == end) {
            s[node] = all[start];
            return ;
        }
        long long mid = (start + end) / 2;
        build(2*node, start, mid, l, r); // left node
        build(2*node+1, mid + 1, end, l, r); // right node
        s[node] = fn(s[2*node], s[2*node+1]); // left + right
    }
    void update(long long i, long long val) {
        all[i] = val;
        build(1, 0, n-1, i, i);
    }
    long long query(long long node, long long start, long long end, const long long l, const long long r) {

        if (start > r || end < l)
            return identity;

        if (start >= l && end <= r)
            return s[node];

        long long mid = (start + end) / 2;

        long long a = query(2*node, start, mid, l, r);
        long long b = query(2*node+1, mid+1, end, l, r);

        return fn(a, b);
    }
    long long query(long long l, long long r) {
        return query(1, 0, n-1, l, r);
    }
};

int main()
{
    long long n, r; cin >> n >> r;
    vector<long long> adj(n);
    for (long long &i : adj) cin >> i;
    segTree st(adj);
    for (long long p = 0; p < r; p ++) {
        long long a , b, c; cin >> a >> b >> c;
        if (a == 1) {
            st.update(--b , c);
        } else {
            cout << st.query(--b, --c) << '\n';
        }
    }
}