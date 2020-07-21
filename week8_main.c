#include <stdio.h>
int main()
{
    int i,j,k,max=0;
    printf("How many columns of block graphs would you like? : ");
    scanf("%d",&i);
    if(i>100 || i<1)
    {
        printf("Invalid value");
        exit(0);
        return 0;
    }
    int blockgraph[i];
    for(j=0;j<i;j++)
    {
        printf("Please input the value of the graph(%d of %d) : ",j+1,i);
        scanf("%d",&blockgraph[j]);
        if(blockgraph[j]>128 || blockgraph[j]<-1)
        {
            printf("Invalid value");
            exit(0);
        }
        if(blockgraph[j]>max) max=blockgraph[j];
    }
    for(j=max;j>0;j--)
    {
        for(k=0;k<i;k++)
        {
            if(blockgraph[k]>=j) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
