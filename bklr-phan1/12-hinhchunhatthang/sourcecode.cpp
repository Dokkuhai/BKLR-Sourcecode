#include <iostream>
using namespace std;
void hinhchunhatthang(int a,int b){
    for(int i=0; i<a;i++){
        for(int j=0; j<b;j++){
            cout<<'#';
        }cout<<"\n";
}
    } 
int main(){
    int M, N;
    cin>>N>>M;
hinhchunhatthang(N,M);
return 0;
}