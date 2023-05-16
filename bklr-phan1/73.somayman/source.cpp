#include <iostream>
using namespace std;

bool luckynumber(int n){
    bool check = true;
    while(n>0){
        if(n % (n%10) != 0){ 
            check=false;
            break;
        }n/=10;
        
    }
    return check;
}

int main(){
    int n;
    cin >> n;
    if(n % 10 ==0) cout << "YES" <<endl;
    if(luckynumber(n) == true){
        cout << "YES" <<endl;
    }else cout << "NO" <<endl;
    return 0;
}
