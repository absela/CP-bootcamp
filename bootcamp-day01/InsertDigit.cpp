#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int d,x;
        cin >> d >> x;
        string s;
        cin >> s;
        for(int j=0;j<d;j++)
        {
            if ((s[j] - '0') < x)
            {
                cout << x;
                x=-1; 
            }
                cout << s[j];
        }
        if (x != -1)
            cout << x;
        cout << endl;
    }
}