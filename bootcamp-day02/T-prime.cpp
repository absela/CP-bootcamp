#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    long long t[1000001]={0};
    for(int i=2;i<=1000001;i++)
    {
        if (t[i]==0)
        {
            for(int j=2; i*j<=1000001;j++)
            {
                t[i*j]=1;
            }
        }
    }
    int n;
    cin >> n;
    long long dd;
    long long sq;
    for (int i = 0; i < n; i++)
    {
        cin >> dd;
        sq = sqrt(dd);
        if(dd==1){cout << "NO" << endl;}
        else if ((sq*sq==dd) && (t[sq]==0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}