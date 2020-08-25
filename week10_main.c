#include <stdio.h>
#include <string.h>

int main()
{
    int i,c;
    scanf("%d\n",&c);
    if(c<1||c>100)
    {
        printf("More than limit");
        exit(0);
    }
    int len[c];
    char slist[c][104];
    for(i=0;i<c;i++)
    {
        fgets(slist[i],102,stdin);
        if(strlen(slist[i])>102)
        {
            printf("More than limit");
            exit(0);
        }
        len[i]=strlen(slist[i])-2;
        slist[i][len[i]+1]='\0';
    }
    for(i=0;i<c;i++)
    {
        if(slist[i][len[i]]=='s'||slist[i][len[i]]=='x'||slist[i][len[i]]=='z'||(slist[i][len[i]]=='h'&&(slist[i][len[i]-1]=='c'||slist[i][len[i]-1]=='s')))
            strcpy(slist[i],strcat(slist[i],"es"));
        else if(slist[i][len[i]]=='y'&&!(slist[i][len[i]-1]=='a'||slist[i][len[i]-1]=='e'||slist[i][len[i]-1]=='i'||slist[i][len[i]-1]=='o'||slist[i][len[i]-1]=='u'))
        {
            slist[i][len[i]]='i';
            slist[i][len[i]+1]='e';
            slist[i][len[i]+2]='s';
        }
        else if(slist[i][len[i]]=='o'&&!(slist[i][len[i]-1]=='a'||slist[i][len[i]-1]=='e'||slist[i][len[i]-1]=='i'||slist[i][len[i]-1]=='o'||slist[i][len[i]-1]=='u'))
            strcpy(slist[i],strcat(slist[i],"es"));
        else strcpy(slist[i],strcat(slist[i],"s"));
    }
    printf("--------------------------\n");
    for(i=0;i<c;i++)
    {
        printf("%s\n",slist[i]);
    }
    return 0;
}
