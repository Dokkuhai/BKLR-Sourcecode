#include <iostream>
using namespace std;
bool checkprime(int n)
{
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 1; i--)
    {
        if (checkprime(i) == true)
        {
            cout << i;
            break;
        }
    }
    return 0;
}