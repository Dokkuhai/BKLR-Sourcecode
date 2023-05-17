#include <iostream>
using namespace std;

bool check(int n){
  int temp=0;
  for(int i=0;i<n;i++){
    temp+=i;
  }
  if(n % temp == 0){
    return true;
  }return false;

}

int main (int argc, char *argv[])
{
  int x;
  cin >> x;

  if(check(x)) cout <<"YES"<<endl;
  else cout << "NO"<<endl;
  return 0;
}
