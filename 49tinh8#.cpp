#include <iostream>
using namespace std;


int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    long result=(a+b)+(b-c)+(c*d)+(d/(float)a);
    cout<<result;
    return 0;
    }