#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int result = 0;
  int A[n];
  for(int i=0;i<n;i++){
    cin >> A[i];
  }
  for(int i=0;i<n;i++){
    result += (i+1)*A[i];
  }
  cout << result <<endl;
}
