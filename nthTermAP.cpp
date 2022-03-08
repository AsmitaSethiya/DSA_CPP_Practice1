#include<iostream>
using namespace std;


int nthTerm(int n)
{
    int ans = 3 * n + 7;
    
    return ans;
}

int main()
{
    
    int n; 
    cin >> n;
    
    int answer  = nthTerm(n);
    
    cout << "Answer is :" << answer;
    
    return 0;    
}
