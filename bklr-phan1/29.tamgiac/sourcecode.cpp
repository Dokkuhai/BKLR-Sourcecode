#include <iostream>
#include <algorithm>

using namespace std;
int check[4];
void sort(int a, int b, int c){
    if(a<=b && a<=c){
        check[1] = a;
        if(c<b){
            check[2] = c;
            check[3] = b;
        }
        else
        {
            check[2]=b;
            check[3]=c;
        }
    }
}



int main(){
    int a, b, c;
    cin>>a>>b>>c;
    sort(a,b,c);
    sort(b,a,c);
    sort(c,b,a);
    a=check[1];
    b=check[2];
    c=check[3];
    
   if(a*a + b*b==c*c) 
   {
    cout<<"0";
   }else if(c*c>a*a+b*b)
   {
    cout<<"1";

   }else cout<<"2";
}
