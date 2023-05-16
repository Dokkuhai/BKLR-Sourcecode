#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[])
{
  long int n;
  cin >> n;
  int result=0;
  int i=0;
  do{
    result+= (n%10)*(pow(2,i));
    n/=10;
    i++;
  }while(n!=0);
  cout << result << endl;
  return 0;
}
