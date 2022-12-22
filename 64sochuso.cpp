#include <iostream>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    
   if(n==0)
   {
       cout<<1;
   }else
   {
    int temp=0;
    while(1)
    {
        
        if((n / (float)10) != 0)
        {
            
            temp+=1;
            n/=10;
        }else break;
    }
    cout<<temp;
   }
    
    
   
    return 0;
}
