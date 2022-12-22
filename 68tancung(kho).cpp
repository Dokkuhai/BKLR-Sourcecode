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
    cin >> n;
     int temp = factorial(n);
     while(1)
     {
         if(temp % 10 != 0)
         {
             cout << temp % 10 << endl;
             break;
         }else temp/=10;
     }
     return 0;
}
