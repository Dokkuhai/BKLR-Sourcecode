#include <iostream>
using namespace std;
 
 
int main(){
    int N,S;
    cin>>N;
    S=1;
    for (int i=1;i<=N;i++)
    {
        S=S*i;
    }
    cout<<S;
    return 0;
}