#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
}


void swapalternate(int arr[], int size)
{
    for(int i = 0; i < size; i+=2)
    {
        if(i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {5, 2, 9, 4, 7, 6, 1, 0};

    swapalternate(arr, 8);
    printArray(arr, 8);
    
    return 0;
}
