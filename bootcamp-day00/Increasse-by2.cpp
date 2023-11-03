#include <iostream>

int main()
{
    int n;
    int x;
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cin >> x;
        if(x>=0)
            x +=2;
        std::cout << x << " ";
    }
}