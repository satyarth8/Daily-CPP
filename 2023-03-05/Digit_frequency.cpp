#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    char st[1000];
    int a[]={0,0,0,0,0,0,0,0,0,0};
    scanf("%s",&st);// for hacker rank compiler remove the & sign
    for(int i=48;i<=57;i++)
    {
        for(int j=0;j<=strlen(st);j++)
        {
        if(int(st[j])==i)// for hacker compiler remove replace this line with if((int)st[j]==i)
            a[i-48]=a[i-48]+1;
        }
    }
    for(int i=0;i<=9;i++)
    {  
        printf("%d ",a[i]);
    }
    return 0;
}
