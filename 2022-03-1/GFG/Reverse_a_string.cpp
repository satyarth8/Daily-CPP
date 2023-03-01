#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;//index increaser for the reversed string
    string str,rev;
    getline(cin,str);//input string using getline
    for(int i=str.size()-1;i>=0;i--)
    {
        rev[x]=str[i];//interchange the values
        x++;
    }
    for(int i=0;i<str.size();i++)
    {
        cout<<rev[i];//output the rev string
    }
}