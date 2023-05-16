#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int result = 1;
  for(int i=a;i<=b;i++){
    result *=i;
  }
  cout << result % c <<endl;
}
