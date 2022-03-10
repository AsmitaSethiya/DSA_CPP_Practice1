#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    
    cout << endl;
}

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 4, 0, 5, -2, 15};
    
    reverse(arr, 6);
    
    printArray(arr, 6);
    
    return 0;
    
}
