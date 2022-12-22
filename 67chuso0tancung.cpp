#include <iostream>
using namespace std;
int factorial(int n)
{
   int temp=1;
   for(int i=1; i<=n; i++) 
   {
       temp*=i;
       
   }
   return temp;
}
int main()
{
    int n;
    int count = 0;
    cin >> n;
    int temp=factorial(n);
    while(temp % 10 == 0)
    {
        count+=1;
        temp/=10; 
    }
    cout<< count;
    
    return 0;
}
