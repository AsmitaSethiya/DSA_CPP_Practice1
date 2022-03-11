int findUnique(int *arr, int size)
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
  int size;
  cin >> size;
  
  int n[10];
  
  for(int i = 0; i < size; i++)
  {
    cin >> n[i] >> " " ; 
  }
  
  int ans = findUnique(n, size);
  
  cout << " The unique element is : >> ans;
  
  return 0;
}
