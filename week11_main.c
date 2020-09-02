#include<stdio.h>
#include<string.h>

int main()
{
    int c,i,j,in,t,min,minm,mind;
    printf("Input the amount of dates needed sorting : ");
    scanf("%d\n",&c);
    char date[c][22],month_text[c][12];
    int day[c],month[c],year[c];
    for(i=0;i<c;i++)
    {
        fgets(date[i],22,stdin);
        sscanf(date[i],"\n%s %d, %d\n",&month_text[i],&day[i],&year[i]);
        if (!strcmp(month_text[i],"January")) month[i]=1;
        else if (!strcmp(month_text[i],"February")) month[i]=2;
        else if (!strcmp(month_text[i],"March")) month[i]=3;
        else if (!strcmp(month_text[i],"April")) month[i]=4;
        else if (!strcmp(month_text[i],"May")) month[i]=5;
        else if (!strcmp(month_text[i],"June")) month[i]=6;
        else if (!strcmp(month_text[i],"July")) month[i]=7;
        else if (!strcmp(month_text[i],"August")) month[i]=8;
        else if (!strcmp(month_text[i],"September")) month[i]=9;
        else if (!strcmp(month_text[i],"October")) month[i]=10;
        else if (!strcmp(month_text[i],"November")) month[i]=11;
        else if (!strcmp(month_text[i],"December")) month[i]=12;
        else
        {
            printf("Invalid month - Please check your spelling");
            exit(0);
        }
        //printf("%d %d %d\n",day[i],month[i],year[i]);
    }
    printf("-----------------------------------------------------\n");
    for(i=0;i<c;i++)
    {
        in=i;
        min=year[i];
        minm=month[i];
        mind=day[i];
        for(j=i+1;j<c;j++)
        {
            if(min>year[j])
            {
                in=j;
                min=year[j];
            }
            else if(min==year[j])
            {
                if(minm>month[j])
                {
                    in=j;
                    minm=month[j];
                }
                else if(minm==month[j])
                {
                    if(mind>day[j])
                    in=j;
                    mind=day[j];
                }
            }
            //printf("%d: (%d) %d %d %d\n",i,in,min,minm,mind);
        }
        t=year[i];
        year[i]=year[in];
        year[in]=t;
        t=month[i];
        month[i]=month[in];
        month[in]=t;
        t=day[i];
        day[i]=day[in];
        day[in]=t;
        //printf("%d %d %d",day[i], month[i], year[i]);
        if (month[i]==1) strcpy(month_text[i],"January");
        else if (month[i]==2) strcpy(month_text[i],"February");
        else if (month[i]==3) strcpy(month_text[i],"March");
        else if (month[i]==4) strcpy(month_text[i],"April");
        else if (month[i]==5) strcpy(month_text[i],"May");
        else if (month[i]==6) strcpy(month_text[i],"June");
        else if (month[i]==7) strcpy(month_text[i],"July");
        else if (month[i]==8) strcpy(month_text[i],"August");
        else if (month[i]==9) strcpy(month_text[i],"September");
        else if (month[i]==10) strcpy(month_text[i],"October");
        else if (month[i]==11) strcpy(month_text[i],"November");
        else if (month[i]==12) strcpy(month_text[i],"December");
        printf("%s %d, %d\n",month_text[i],day[i],year[i]);
    }

    return 0;
}

/*December 7, 1941
December 22, 1939
February 29, 2004
June 7, 1941
December 25, 1
September 11, 2001
May 11, 2150
November 8, 208
December 8, 1941
July 31, 2001*/
