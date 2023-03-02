#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t,a,b;
    cin>>t;
    while(t!=0)
    {
        cin>>a>>b;
        if(a*10>b*5)
            cout<<"FIRST"<<endl;
        else if(a*10<b*5)
            cout<<"SECOND"<<endl;
        else
            cout<<"ANY"<<endl;
        t--;
    }
	return 0;
}
