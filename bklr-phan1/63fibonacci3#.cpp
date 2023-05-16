#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==1 || n==2) return 1;
    else return (fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
    int n;
    cin>>n;
    int i=1;
   while(1)
   {
       if(fibonacci(i) == n)
       {
           cout<<"YES";
           break;
       }
       if(fibonacci(i) > i)
       {
           cout<<"NO";
           break;
       }
       i++;
       
   }
    
    
    
}
