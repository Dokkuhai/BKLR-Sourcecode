#include <iostream>
#include <math.h>y6
using namespace std;


int main()
{
	float a;
	float b;
	cin>>a>>b;

	
	
	float result=(a+b)*(a-b)/(a*b)/(a/(float)b);
	
	cout<<result;
	return 0;
	
}