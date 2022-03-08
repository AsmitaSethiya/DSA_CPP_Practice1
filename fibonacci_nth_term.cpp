#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0, b = 1, c;
    
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        for(int i = 2; i < n; i++)
        {
            c = a + b;
            
            a = b;
            b = c;
        }
    }
    
    return c;
}

int main()
{
    
    int n; 
    cin >> n;
    
    int ans = fibonacci(n);
    cout << "nth term is : " << ans;
    
    return 0;    
}
