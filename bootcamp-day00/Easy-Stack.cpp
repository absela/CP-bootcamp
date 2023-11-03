#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>


using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int x;
    // vector<string> v;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        if (x == 1)
        {
            int d;
            scanf("%d",&d);
            s.push(d);
        }
        else if (x == 2)
        {
            if (!s.empty())
                s.pop();
        }
        else if (x == 3)
        {
            if (!s.empty())
                printf("%d\n",s.top());
            else
                printf("%s\n","Empty!");
        }
    }
}
