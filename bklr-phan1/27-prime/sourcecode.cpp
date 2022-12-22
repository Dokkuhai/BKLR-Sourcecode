#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    do{
        cin>>n;
    }while(n<1);
    int count=0;
    for(int i=1;i<=n;i++){
        if(n % i==0){
            count+=1;
        }
    }
    if(count==2){
        cout<<"YES";
    } else for(int j=2;j<sqrt(n);j++){
        if(n % j==0){
            cout<<j;
            break;
        }
    }
    return 0;
}