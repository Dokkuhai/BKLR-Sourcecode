#include <iostream>
using namespace std;

int main(){
    string Z;
    cin>>Z;
    string temp;
    for(int i=0;i<Z.length();i++){
        
        temp+=Z[i];
        cout<<temp<<"\n";
    }
    cout<<temp<<"\n";
    for(int i = Z.length()-1;i >= 0; i--)
    {
        temp[i] = ' ';
        cout << temp<<"\n";
    }   
}