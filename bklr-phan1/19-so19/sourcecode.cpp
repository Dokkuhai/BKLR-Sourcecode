#include <iostream>
using namespace std;

int main(){
    int array[256];
    bool temp=false;
    for(int i=0;i<256;i++){
        cin>>array[i];
        if (array[i]==19){
            temp=true;
            cout<<array[i];
            break;
        }
    }
    if (temp==false) cout<<"IMPOSSIBLE";
    return 0;
    
}