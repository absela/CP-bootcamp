#include <iostream>
#include <vector>
#include <queue>

using namespace std;
bool isvalid(int x , int y, int n)
{
    if (x >= n || y >= n || y < 0 || x < 0 )
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;

    vector<vector<char> >v;
    vector<vector<long long> >v2;
    v.resize(n);
    v2.resize(n);
    
    for(int i=0;i<n;i++)
    {
        v[i].resize(n);
        v2[i].resize(n);
        for(int j=0;j<n;j++)
        {
            
            cin >> v[i][j];
            v2[i][j] = 0;
            if (i == 0  && j  == 0 && v[i][j] == '.')
                v2[i][j] = 1;
            if (v[i][j] != '.')
                continue; 
            if (isvalid(i -1 , j, n)  )
            {
                v2[i][j] = (v2[i][j]  + v2[i -1][j]) % (1000000007) ;
            }
            if (isvalid(i  , j -1 , n) )
                v2[i][j] = (v2[i][j]  + v2[i][j -1]) % (1000000007) ;
        }
    }
    cout << (v2[n-1][n-1]) << endl;
}
