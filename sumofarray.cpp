#include<iostream>
using namespace std;


int sumOfArray(int num[], int size)
{
    int sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        sum = sum + num[i];
    }
    
    return sum;
}

int main()
{
    int size; 
    
    cin >> size;
    
    int arr[10];
    
    for(int i = 0 ; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Sum of array element is: " << sumOfArray(arr, size);
}
