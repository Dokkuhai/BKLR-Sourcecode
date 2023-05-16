#include <iostream>
using namespace std;


int main()

{
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	long long result=(a+b)*(b+c)*(c+d)*(d+a);
	cout<<result;
	return 0;
}