#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int temp = 1;
    for(int i=0; i<n; i++)
    {
        temp*= a[i];
    }
    
    cout << abs(temp % 10);
    return 0;
}