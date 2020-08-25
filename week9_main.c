#include <stdio.h>
int main()
{
    int num,index,i,j;
    scanf("%d",&num);
    float numset[num],avg=0,med,mode,temp,min;
    // Input evaluation and finding the average
    for(i=0;i<num;i++)
    {
        scanf("%f",&numset[i]);
        avg+=numset[i];
    }
    avg/=num;

    // Arranging the array
    for(i=0;i<num;i++)
    {
        min=numset[i];
        index=i;
        for(j=i+1;j<num;j++)
        {
            if(min>numset[j])
            {
                min=numset[j];
                index=j;
            }
        }
        temp=numset[i];
        numset[i]=min;
        numset[index]=temp;
    }
    // Finding the median
    if(num%2)
        med=numset[(num-1)/2];
    else
        med=(numset[num/2]+numset[num/2-1])/2;

    printf("Mean = %f\nMedian = %f\n",avg,med);
    //Finding the mode 'temp' used to count the occurrences, 'min' used to find the max of the mode
    int dupC[num];
    for (i=0;i<num;i++)
    {
        dupC[i]=0;
        for(j=i+1;j<num;j++)
        {
            if(numset[j]==numset[i]) dupC[i]++;
        }
    }
    min=dupC[0];
    temp=0;
    for (i=1;i<num;i++)
    {
        if(min<dupC[i]) min=dupC[i];
    }
    for (i=0;i<num;i++)
    {
        if(min==dupC[i])
        {
            temp++;
            mode=numset[i];
        }
    }
    if(!(temp-1)) printf("Mode = %f",mode);
    else printf("There is no mode");
    return 0;
}
