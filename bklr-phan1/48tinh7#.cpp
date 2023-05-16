#include <iostream>
using namespace std;


int main(){
    long a, b, c, d;
    cin>>a>>b>>c>>d;
    long int result= a%b + b%c +c%d + d%a;
    cout<< result;
    return 0;
}