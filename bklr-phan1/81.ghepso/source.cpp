#include <iostream>
#include <string.h>
using namespace std;

 string Append(int _1, int _2){
   std::stringstream converter;

    converter << _1 << _2;

    return converter.str();
}


int main (int argc, char *argv[])
{
  int a, b;
  cin >> a >> b;
  //printf("%d%d\n",b,a);
  string c = Append(a,b);
  cout<<c<<endl;
  return 0;
}

