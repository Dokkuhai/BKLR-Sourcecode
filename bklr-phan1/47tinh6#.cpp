#include <iostream>
using namespace std;


int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    long int result=a*b+b*c+c*d+a*d;
    cout<<result;
    return 0;
}