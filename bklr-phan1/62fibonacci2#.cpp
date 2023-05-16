#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==1 || n==2) return 1;
    else return (fibonacci(n-1) + fibonacci(n-2));
    
    
}

int main()
{
    long int n;
    cin>>n;
    int i=1;
    int temp=0;
    while(fibonacci(i) <= n)
    {
        
        temp=fibonacci(i);
        i++;
    }
    cout<<temp;
    return 0;
    
    
    
}