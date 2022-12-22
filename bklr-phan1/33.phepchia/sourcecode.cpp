#include <iostream>
using namespace std;

int main(){
    int n, k, q, r;
    cin>>n>>k;
    r= n % k;
    q=n/k;
    cout<<r+q;
    return 0;
}