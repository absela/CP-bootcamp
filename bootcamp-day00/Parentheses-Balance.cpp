#include <iostream>
#include <string>
#include <algorithm>
#include <stack>


using namespace std;

int main()
{
    int n;
    cin >> n;cin.ignore();
    string d;
    for(int i=0;i<n;i++)
    {
        getline(cin,d);
        stack<char>s;
        for(size_t j=0;j<d.size();j++)
        {
            if (s.empty())
            {
                s.push(d[j]);
            }
            else if(d[j] == ')' && s.top() == '(')
            {
                s.pop();
            }
            else if(d[j] == ']' && s.top() == '[')
            {
                s.pop();
            }
            else
            {
                s.push(d[j]);
            }
        }
        if (s.empty())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}