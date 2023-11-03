#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    vector<int>s;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        cout << s[i] << " ";
    }
}