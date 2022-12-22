#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	char c;
	int a, b;
	cin>>a>>c>>b;
	switch(c)
	{
	 case '+' :
	      cout<<a+b<<endl;  
	      break;
	    
	 case '-' :
	     cout<<a-b<<endl;
	     break;
	     
	 case '*' :
	     cout<<a*b<<endl;
	     break;
	     
	 case '/' :
	     cout<<(double)a/b<<endl;
	     break; 
	    
	}
	return 0;
}