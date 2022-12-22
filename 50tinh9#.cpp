#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    double result= ((a/(float)b)*c)/d;
    result =round(result * 100) / 100 ;
    cout<<result;
    
    return 0;
}