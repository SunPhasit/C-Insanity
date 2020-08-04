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
        for(j=i;j<num;j++)
        {
            if(min>numset[j])
            {
                min=numset[j];
                index=j;
            }
        }
        temp=numset[i];
        numset[i]=min;
        numset[j]=temp;
    }
    for(i=0;i<num;i++) printf("%f ",numset[i]);
    // Finding the median
    if(num%2)
        med=numset[(num+1)/2];
    else
        med=(numset[num/2]+numset[num/2+1])/2;

    printf("Mean = %f\nMedian = %f",avg,med);
    //Finding the mode
    int modecount[num];
    min=0; // will be treated as max for this
    temp=1; // will be treated as count
    for(i=0;i<num;i++)
    {
        modecount[i]=1;
        while(numset[i]==numset[i+modecount[i]]) modecount[i]++;
    }
    min=modecount[0];
    i=0;
    for(i=1;i<num;i++)
    {
        if(min<modecount[i])
        {
            min=modecount[i];
            index=i;
        }
        if(min=modecount[i])
        {
            temp++;
            avg=i; //avg used to store the location of the second mode
        }
    }
    /*
    if(temp=1) printf("The mode is %f");
    else if(temp=2) printf("The mode is %f and %f");
    else printf("There is no mode");*/
    return 0;
}
