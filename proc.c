#include <stdio.h>
#include "myfunctions.h"
int main()
{
    int n,num[100],i;
    printMyFeelings();
    printf("\nHow many integers? : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    arrangeNumber(num,n);
    for(i=0;i<n;i++)
    {
        printMyFeelings("%d",num[i]);
    }
    return 0;
}
