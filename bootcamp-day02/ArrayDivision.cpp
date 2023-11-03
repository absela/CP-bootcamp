#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool issub(const vector<int>& arr, int n, int k, long long maxSum) {
    int count = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxSum)
            return false;
        
        sum += arr[i];
        if (sum > maxSum) {
            count++;
            sum = arr[i];
        }
    }
    count++;
    return count <= k;
}

long long maxisumsuba(const vector<int>& arr, int n, int k) {
    long long left = *max_element(arr.begin(), arr.end());
    long long right = accumulate(arr.begin(), arr.end(), 0LL);
    long long result = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        
        if (issub(arr, n, k, mid)) {
            result = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long maxSum = maxisumsuba(arr, n, k);
    cout << maxSum << endl;

    return 0;
}