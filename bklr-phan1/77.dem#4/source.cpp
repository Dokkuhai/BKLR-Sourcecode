#include <iostream>
using namespace std;

bool primenumber(int n){
bool check = true;
if(n == 1) check = false;
for(int i=2;i<n-1;i++){
    if(n % i == 0){
        check = false;
        break;
    }
  }
return check;
}

int main(){
int n,dem=0;
cin >> n;
int a[n];
for(int i=0;i<n;i++){
        cin >> a[i];
        if(primenumber(a[i]) == true){
            dem+=1;
        }
    }
cout << dem;
}

