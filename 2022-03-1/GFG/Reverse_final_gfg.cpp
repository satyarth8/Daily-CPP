#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str)
{
    int size=str.size()-1;
    char temp;
    for(int i=0;i<size;i++)
    {
        temp=str[i];
        str[i]=str[size];
        str[size]=temp;
        size--;
    }
    return str;   
}
int main()
{
    cout<<reverseWord("Hello");
}