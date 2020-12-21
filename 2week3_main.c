#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f_in,*f_out;
    char symbol[100][3],temp[3];
    int i=0,j,k,n[100],c;
    f_in=fopen("atomicnumber.txt","r");
    f_out=fopen("atomicsymbols.txt","w");
    while(fscanf(f_in,"%s %d\n",symbol[i],&n[i])!=EOF)
        i++;
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(n[j]>n[k])
            {
                c=n[j];
                n[j]=n[k];
                n[k]=c;
                strcpy(temp,symbol[j]);
                strcpy(symbol[j],symbol[k]);
                strcpy(symbol[k],temp);
            }
        }
    }
    for(j=0;j<i;j++)
    {
        fputs(symbol[j],f_out);
        fprintf(f_out," ");
    }
    fclose(f_in);
    fclose(f_out);
    return 0;
}
