#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cin>>n;
int count=0;

    for (int i = 1; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count += 1;
        }
    }
    cout << count;
}