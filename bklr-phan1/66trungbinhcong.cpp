#include <iostream>
#include <stdlib.h>
using namespace std;
int countnumeral(int n)
{
    int count = 0;
    while(n != 0)
    {
        count+=1;
        n/=10;
    }
    return count;
}
int sumnumeral(int n)
{
     int sum = 0;
    
    while(n != 0)
    {
        sum+= n % 10;
        n/=10;
        
        
    }
   
    return sum;
}
 
double averagenumeral(int n)
{
    double average = (float) sumnumeral(n) / countnumeral(n);
    return average;
}
int main()
{
    int n;
    cin >> n;
    cout<< round(averagenumeral(n) * 100) / 100 ;
    
    
}