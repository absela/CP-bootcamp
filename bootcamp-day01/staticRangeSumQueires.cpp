#include <iostream>
#include <vector>

int main() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::vector<long long> vs(n + 1);
    for (int i = 1; i <= n; i++) {
        vs[i] = vs[i - 1] + v[i - 1];
    }

    for (int j = 0; j < q; j++) {
        int a, b;
        std::cin >> a >> b;

        long long sum = vs[b] - vs[a - 1];
        std::cout << sum << std::endl;
    }
}