#include <iostream>
using namespace std;


bool checknumber(int n){
    bool check=false;
    for(int i=1;i<=n;i++){
        if(i*i == n){
            check=true;
            break;
        }
    }
    return check;
}

int main(){
    int n, dem=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(checknumber(i) == true) {
            dem+=1;
        }
    }
    cout << dem;
    return 0;

}
