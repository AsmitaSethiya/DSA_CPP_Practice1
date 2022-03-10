#include<iostream>
using namespace std;

bool search(int a[], int key, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(key == a[i])
        {
            return 1;
        }
    }
    
    return 0;
}

int main()
{
    int a[10] = {5 , 7, -2, 10, 22, -2, 0, 5, 22, 1};
    
    int key;
    cout << "Enter the key to search for : " << endl; 
    
    cin >> key;
    
    bool found = search(a, key, 10);
    
    if(found)
    {
        cout << " Key is present " << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }
    
    return 0;
}
