#include <stdio.h>
int main()
{
    int w,h,c=0,i,j;
    scanf("%d %d",&w,&h);
    int LCDs[w+2][h+2], lines[h];
    for(i=0;i<h+2;i++)
        for(j=0;j<w+2;j++)
            LCDs[i][j]=1;
    for(i=0;i<h;i++)
    {
        scanf("%d",&lines[i]);
        for(j=0;j<w;j++)
        {
            LCDs[i+1][j+1]=lines[i]%10;
            lines[i]/=10;
            printf( "%d %d",lines[i],LCDs[i+1][j+1]);
        }
    }
    for(i=0;i<h+2;i++)
    {
        for(j=0;j<w+2;j++)
            printf("%d ",LCDs[i][j]);
        printf("\n");
    }
    for(i=1;i<h+1;i++)
        for(j=1;j<w+1;j++)
        {
              if(!LCDs[i][j])
              {
                  if(!LCDs[i-1][j-1])
                  {
                      if(!LCDs[i-1][j-1]) c=1;
                      if(!LCDs[i+1][j]) c=1;
                      if(!LCDs[i][j+1]) c=1;
                      if(!LCDs[i+1][j+1]) c=1;
                  }
                  if(!LCDs[i+1][j])
                  {
                      if(!LCDs[i-1][j-1]) c=1;
                      if(!LCDs[i+1][j]) c=1;
                      if(!LCDs[i][j+1]) c=1;
                      if(!LCDs[i+1][j+1]) c=1;
                  }
                  if(!LCDs[i][j+1])
                  {
                      if(!LCDs[i-1][j-1]) c=1;
                      if(!LCDs[i+1][j]) c=1;
                      if(!LCDs[i][j+1]) c=1;
                      if(!LCDs[i+1][j+1]) c=1;
                  }
                  if(!LCDs[i+1][j+1])
                  {
                      if(!LCDs[i-1][j-1]) c=1;
                      if(!LCDs[i+1][j]) c=1;
                      if(!LCDs[i][j+1]) c=1;
                      if(!LCDs[i+1][j+1]) c=1;
                  }
              }
        }
    if(c==1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
