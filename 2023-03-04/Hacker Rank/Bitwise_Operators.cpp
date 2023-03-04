#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{
    int max_and=0 , max_or=0 , max_not=0;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i&j)>max_and && (i&j)<k)
            {
                max_and=i&j;
            }
            if((i|j)>max_or && (i|j)<k)
            {
                max_or=i|j;
            }
            if((i^j)>max_not && (i^j)<k)
            {
                max_not=i^j;
            }
        }
        
    }
    printf("%d\n",max_and);
    printf("%d\n",max_or);
    printf("%d\n",max_not);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
