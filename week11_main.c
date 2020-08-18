#include<stdio.h>
#include<string.h>

int main()
{
    int c,i,j,in,t;
    printf("Input the amount of dates needed sorting : ");
    scanf("%d\n",&c);
    char date[c][20],month_text[c][10];
    int day[c],month[c],year[c];
    /*printf("Please input the date(Month dd, yyyy)\n");*/
    for(i=0;i<c;i++)
    {
        /*printf("Date %d of %d : ",i+1,c);*/
        fgets(date[i],18,stdin);
        sscanf(date[i],"%s %d, %d",&month_text[i],&day[i],&year[i]);
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
    }
    for(i=0;i<c;i++)
    {
        for(j=i;j<c;j++)
        {
            if(year[i]>year[j])
                in=j;
            else if(year[i]==year[j])
            {
                if(month[i]>month[j])
                    in=j;
                else if(month[i]==month[j])
                {
                    if(day[i]>day[j])
                    in=j;
                }
            }
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
        if (month[i]==1) strcpy(month_text[i],"January");
        else if (month[i]==1) strcpy(month_text[i],"February");
        else if (month[i]==1) strcpy(month_text[i],"March");
        else if (month[i]==1) strcpy(month_text[i],"April");
        else if (month[i]==1) strcpy(month_text[i],"May");
        else if (month[i]==1) strcpy(month_text[i],"June");
        else if (month[i]==1) strcpy(month_text[i],"July");
        else if (month[i]==1) strcpy(month_text[i],"August");
        else if (month[i]==1) strcpy(month_text[i],"September");
        else if (month[i]==1) strcpy(month_text[i],"October");
        else if (month[i]==1) strcpy(month_text[i],"November");
        else if (month[i]==1) strcpy(month_text[i],"December");
        printf("%s %d, %d",month_text[i],day[i],year[i]);
    }

    return 0;
}
