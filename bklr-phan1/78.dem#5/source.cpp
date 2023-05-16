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

int main (int argc, char *argv[])
{
  int n, dem=0;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; i++) {
      cin>>A[i];
      if (luckynumber(A[i]) == true) {
          dem+=1;
      }
  }
  cout << dem <<endl;
  return 0;
}
