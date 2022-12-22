#include <iostream>
using namespace std;
int main(){
     int n, k;
     cin>>n>>k;
     int sum=0;
     for(int i=1;i<=n;i++){
        sum+= (i*(i+k));
     }
    cout<<sum;
    return 0;
}