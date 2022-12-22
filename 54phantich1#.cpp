#include <iostream>
using namespace std;
bool checkprime(int a){
    if (a==2) return true;
    for(int i=3; i<a-1;i++){
        if (a % i == 0) return false;
        
        }
    
    return true;
    }
    

int main(){
    
    int n;
    cin >> n;
    int i = 2;
    while(n !=1){
        if(checkprime(i) == true)
            {
            if(n % i == 0){
                cout << i << " ";
                n = n / i;
                
               } else i++;
               
            
            }
        
    }
    
    return 0;
}