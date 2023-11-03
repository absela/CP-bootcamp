#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;


// int main()  
// {  
//     long long a, b, max_num;  
//     cin >> a >> b;
    
//     max_num= max(a,b); 
//     while (1)    
//     {  
//         if(max_num % a == 0 && max_num % b == 0)  
//         {  
//             cout << max_num << endl;  
//                 break;  
//         }  
//         ++max_num;
//     }  
    
//     return 0;  
// }  

long long  gcd(long long a, long long b)
{

    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()  
{  
    long long a, b, ans; 
    cin >> a >> b;

    
    long long _gcd = gcd(a,b);
    ans= a*b / _gcd;
    
    cout << ans << endl;  
                
    
    return 0;  
}  
