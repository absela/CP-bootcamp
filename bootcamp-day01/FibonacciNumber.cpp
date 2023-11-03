#include<iostream>
#include<vector>

using namespace std;

int main()
{

    int x, y=0,u = 1, i = u + y;
    cin >> x;
    while (x--)
    {
        i = y + u;
        y = u;
        u = i;
    }
    cout << i << endl;
}