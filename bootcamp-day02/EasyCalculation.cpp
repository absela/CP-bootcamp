#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip> 
using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double a;double b; double c; cin >> a >> b >> c;
        double right = (b + c) / a;
        double l = (c - b) / a;
        double mid = (l + right) / 2;
        while (right - l >= 0.0000001) {
            mid = (l + right) / 2;
            if ((a * mid) + (b * sin(mid)) - c < 0)
                l = mid;
            else
                right = mid;
        }
        cout << fixed << setprecision(6) << mid << endl;
    }
}