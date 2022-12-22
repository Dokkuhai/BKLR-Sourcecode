#include <iostream>
using namespace std;
bool checkinteger(int n)
{
    if(n == (int)n) return true;
    else false;
}
int main()
{
    int n;
    cin>>n;
    if(checkinteger(sqrt(n)) == true) cout << "YES";
    else cout << "NO";
    return 0;
}