#include <iostream>
using namespace std;

int main()
{
    int  a, b, c;
    cin>>a>>b>>c;
    if(a<b && a<c){
        if(c>b){
            cout<<a<<" " <<b<<" "<<c;
        }else cout<<a<<" "<<c<<" "<<b;
        
    } 

    if(b<a && b<c){
        if(c>a){
            cout<<b<<" " <<a<<" "<<c;
        }else cout<<b<<" "<<c<<" "<<a;
        
    } 

    if(c<a && c<b){
        if(a>b){
            cout<<c<<" " <<b<<" "<<a;
        }else cout<<c<<" "<<a<<" "<<b;
        
    } 
}