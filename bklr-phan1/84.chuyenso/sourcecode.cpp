
#include <iostream>
#include <iterator>
#include<string>
using namespace std;

int main (int argc, char *argv[])
{
  int n;
  cin >> n;
  string temp="";
  
  do{
    int result = n%2;
    temp += to_string(result);
    n /= 2;
  }while(n != 0);
  cout << temp <<endl;
  return 0;
}
