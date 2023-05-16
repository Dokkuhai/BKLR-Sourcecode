#include <iostream>
using namespace std;

bool primenumber(int n){
bool check = true;
for(int i=2;i<n-1;i++){
    if(n % i == 0){
        check = false;
        break;
    }
  }
return check;
}


int main(){
    int n, dem=0;
    cin >> n;
    for(int i=2;i<=n;i++){
        if(primenumber(i) == true){
            dem+=1;
        }
    }
    cout << dem;

}


