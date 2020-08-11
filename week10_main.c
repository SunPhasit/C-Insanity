#include <stdio.h>
#include <string.h>

int main()
{
    int i,c;
    scanf("%d",&c);
    if(c<1||c>100)
    {
        printf("More than limit");
        exit(0);
    }
    char slist[c][102];
    for(i=0;i<c;i++)
    {
        scanf("%s",&slist[i]);
        if(strlen(slist[i])>100)
        {
            printf("More than limit");
            exit(0);
        }
        printf("%d", strlen(slist[i]));
        printf("%c", slist[i][strlen(slist[i])-1]);
    }
    for(i=0;i<c;i++)
    {
        if(slist[i][strlen(slist[i])-1]=="s"||slist[i][strlen(slist[i])-1]=="x"||slist[i][strlen(slist[i])-1]=="z"||slist[i][strlen(slist[i])-2]=="ch"||slist[i][strlen(slist[i])-2]=="sh")
            slist[i]=strcat(slist[i],"es");
    }
    for(i=0;i<c;i++)
    {
        printf("%s\n",slist[i]);
    }
    return 0;
}
