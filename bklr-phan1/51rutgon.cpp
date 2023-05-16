#include <iostream>
#include <algorithm>
using namespace std;

 
int gcd(int a, int b){
    // Lặp tới khi 1 trong 2 số bằng 0
    while (a*b != 0){ 
        if (a > b){
            a %= b; // a = a % b
        }else{
            b %= a;
        }
    }
    return a + b; // return a + b, bởi vì lúc này hoặc a hoặc b đã bằng 0.
}
int main(){
    int a, b;
    cin>>a>>b;
    int temp= gcd(a,b);
    cout<<a/temp<<"\t"<<b/temp<<endl;
    return 0;
}