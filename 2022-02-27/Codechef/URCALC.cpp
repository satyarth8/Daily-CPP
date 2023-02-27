#include <iostream>
using namespace std;
// URCALC Solution by Satyartha
// fixed in cout returns the entire characteristic and mantissa part 
int main() 
{
	double a,b;
	cin>>a;//accept 1st num
	cin>>b;//accept 2nd num
	char c;
	cin>>c;//accept operator
	if(c=='+')
	    cout<<a+b<<endl;
	else if(c=='-')
	    cout<<a-b<<endl;
	else if(c=='/')
	    cout<<fixed<<a/b<<endl;
	else if(c=='*')
	    cout<<a*b<<endl;
	return 0;
}
