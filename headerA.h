#include <stdio.h>
void createBoard()
{
    FILE *f_out;
    f_out=fopen("initializedBoard.txt","w");
    int x,y,n,i,j,a,b;
    scanf("%d%d%d",&x,&y,&n);
    int board[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            board[i][j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        board[a-1][b-1]=-1;
    }
    /*for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }
    printf("\n");*/
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(!board[i][j])
            {
                if(i>0)
                {
                    if(board[i-1][j]==-1) board[i][j]++;
                    if(j>0)
                    {
                        if(board[i-1][j-1]==-1) board[i][j]++;
                    }
                    if(j<y-1)
                    {
                        if(board[i-1][j+1]==-1) board[i][j]++;
                    }
                }
                if(i<x-1)
                {
                    if(board[i+1][j]==-1) board[i][j]++;
                    if(j>0)
                    {
                        if(board[i+1][j-1]==-1) board[i][j]++;
                    }
                    if(j<y-1)
                    {
                        if(board[i+1][j+1]==-1) board[i][j]++;
                    }
                }
                if(j>0)
                {
                    if(board[i][j-1]==-1) board[i][j]++;
                }
                if(j<y-1)
                {
                    if(board[i][j+1]==-1) board[i][j]++;
                }
            }
        }
    }
    /*for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }
    printf("\n");*/
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
            if(board[i][j]!=-1)
            {
               fprintf(f_out,"%d",board[i][j]);
            }
            else fprintf(f_out,"*");
        fprintf(f_out,"\n");
    }
}
