#include <stdio.h>

int findIntersection(int count1, int *elements1, int count2, int *elements2, int *its)
{
    int i,j,k=0;
    for(i=0;i<count1;i++)
    {
        for(j=0;j<count2;j++)
        {
            if(elements1[i]==elements2[j])
            {
                its[k]=elements1[i];
                j=count2;
                k++;
            }
        }
    }
    return k;
}

int findUnion(int count1, int *elements1, int count2, int *elements2, int *un)
{
    int i=0,j=0,k=0;
    while((i<count1)&&(j<count2))
    {
        if(elements1[i]<elements2[j])
            {
                un[k]=elements1[i];
                k++;
                i++;
            }
        else if(elements1[i]>elements2[j])
            {
                un[k]=elements2[j];
                k++;
                j++;
            }
        else
        {
            j++;
        }
    }
    if (i<count1)
    {
        for(j=i;j<count1;j++)
        {
            un[k]=elements1[j];
            k++;
        }
    }
    else if (j<count2)
    {
        for(i=j;i<count2;i++)
        {
            un[k]=elements2[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int i,k,n1,n2,its[1000],un[1000];
    scanf("%d",&n1);
    int set1[n1];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&set1[i]);
        its[i+1]=set1[0]-1;
    }
    its[0]=set1[0]-1;
    scanf("%d",&n2);
    int set2[n2];
    for(i=0;i<n2;i++)
    {
        scanf("%d",&set2[i]);
    }
    k=findIntersection(n1,set1,n2,set2,its);
    if(k==0) printf("Empty");
    for(i=0;i<k;i++)
    {
        printf("%d ",its[i]);
    }
    printf("\n");
    k=findUnion(n1,set1,n2,set2,un);
    if(k==0) printf("Empty");
    for(i=0;i<k;i++)
    {
        printf("%d ",un[i]);
    }
    return 0;
}
