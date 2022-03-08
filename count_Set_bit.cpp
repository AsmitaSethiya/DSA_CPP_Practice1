#include<iostream>
using namespace std;

int countSetBit(int n)
{
    int count = 0;
        
    while(n != 0)
    {
        if(n & 1)
        {
            count++;
        }
            
        n = n >> 1;
    }
    
    return count;
    
}    

int main()
{
    int a, b;
    
    cout << "Enter value of a : ";
    cin >> a;
    
    cout << "Enter value of b: ";
    cin >> b;
    
    int count1 = countSetBit(a);
    int count2 = countSetBit(b);
    
    int ans = count1 + count2 ;
    
    cout << "Total set bits are : " << ans;
    
    
    return 0;
    
    
}
