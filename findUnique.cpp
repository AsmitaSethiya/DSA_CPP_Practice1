#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    //Write your code here
    int ans = 0;
    
    for(int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    
    return ans;
    
}
int main()
{
  
  int n[10] = {1, 2, 2, 1, 3, 4, 3};
  
  int ans = findUnique(n, 7);
  
  cout << " The unique element is :" << ans;
  
  return 0;
}
