#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;
int find_gcd(int numbers[], int n) {
    int result = numbers[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, numbers[i]);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    int result = find_gcd(numbers, n);
    std::cout <<  result << std::endl;

    return 0;
}