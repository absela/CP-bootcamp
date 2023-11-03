#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include <map>
using namespace std;


int main()
{
    map<int,int>m;

    string s;
    while (cin >> s)
    {
        if (s == "insert")
        {
            int x;
            cin >> x;
            m[x] = 1;
        }
        else if (s == "delete")
        {
            int x;
            cin >> x;
            m.erase(x);
        }
        else if (s == "exists")
        {
            int x;
            cin >> x;
            if (m.find(x) != m.end())
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
    }
}