#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

long long MOD = 1e9 + 7;

using namespace std;

int main()
{
    int n;cin >> n;
    vector<int> a(n+1,0);
    a[0] = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= 6;j++){
            if(i - j >= 0){
                a[i] += a[i-j];
                a[i] %= MOD;
            }
        }
    }
    cout << a[n] << endl;
}