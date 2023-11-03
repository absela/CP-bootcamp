#include <iostream>
#include<cmath>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i = n; i <= m; ++i)
    {
        int ctr = 0; 

        for(int j = 2; j <= sqrt(i); ++j) 
        {
            if(i % j == 0)
            {
                ctr = 1;
            }
        }

        if(ctr == 0) 
        {
            cout << i <<endl;
            flag = 1;
        }
    }
    if(flag==0)
    {
        cout<<"Absent";
    }
}