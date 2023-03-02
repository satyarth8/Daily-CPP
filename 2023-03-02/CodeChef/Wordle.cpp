#include <bits/stdc++.h>
using namespace std;
//my submission on Codechef
int main() 
{
	int t;
    string s;// hidden word
    string tr;//guess word
    cin>>t;
    while(t!=0)
    {
        cin>>s;
        cin>>tr;
        for(int i=0;i<5;i++)
        {
            if(s[i]==tr[i])
                cout<<"G";
            else
                cout<<"B";
        }
        cout<<endl;
        t--;
    }
	return 0;
}
