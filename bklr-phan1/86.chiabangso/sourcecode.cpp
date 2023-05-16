#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin >> arr[i];
  }
  int sum=arr[0];
  for(int i=0;i<n;i++){
    sum = arr[i] + arr[i+1];
    
  }
  return 0;
}
