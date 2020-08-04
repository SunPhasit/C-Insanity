#include <stdio.h>
int main()
{
    int w,h,c=0;
    scanf("%d %d",&w,&h);
    int LCDs[w][h];
    for(i=0;i<h;i++)
        for(j=0;j<w;j++)
            scanf("%d",&LCDs[i][j]);
    for(i=0;i<h;i++)
        for(j=0;j<w;j++)
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
