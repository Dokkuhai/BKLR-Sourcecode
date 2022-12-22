#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string Z;
    cin>>Z;
    
    for(int i=0;i<Z.length();i++){
        if(i==4 || i==8){
            cout<< (char) toupper(Z[i])<<" ";
        }
    }
    return 0;
}
