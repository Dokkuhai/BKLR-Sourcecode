#include <iostream>

using namespace std;
int main(){
  int n;
  cin >> n;
  if(n < 60){ 
    printf("00:00:%02d",n);
    cout<<endl;
  }
    else{ 
    printf( "%02d:%02d:%02d",n/3600,(n % 3600)/60,(n % 3600) % 60);
    cout<<endl;
  }

  return 0;
  

}

