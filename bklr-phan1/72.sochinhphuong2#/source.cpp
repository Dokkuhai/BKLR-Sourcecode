#include <iostream>
using namespace std;

bool checknumber(int n){
    bool check=false;
    for(int i=1;i<=n/2;i++){
        if(i*i == n){
            check=true;
            break;
        }
    }
    return check;
}

int main(){
    int n;
    cin >> n;
    for(int i=n+1;i>n;i++){
        if(checknumber(i) == true){
            cout << i <<endl;
            break;
        }
    }
    return 0;
    


}
