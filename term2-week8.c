/* C-insanity - Term 2 */
/* -- Binary files --  */
/* A binary file is a file stored in a non-binary format (sometimes called non-text file)
   The file is signified by .bin
   You shouldn't be able to read or edit the file
   + fwrite -> fprintf for binary files
   + fread -> fscanf for binary files
*/

#include<stdio.h>
#define MAX 10000


int main()
{
    FILE *fp;
    int i;
    fp=fopen("num.bin","w");
    for(i=0;i=MAX;i++)
    {
        fwrite(&i,sizeof(int),1,fp);
    }
    fclose(fp);
    return 0;
}


/* + fwrite(&i,sizeof(int),1,fp);
     - &i - the address of the of the first memory cell whose content is to be copied to the file
     - sizeof(int) - size of one value(int - 4 bytes = 32 bits)
     - 1 - maximum number of elements to copy
     - fp - FILE pointer
*/
/*
int main()
{
    FILE *fp;
    int i;
    fp=fopen("num.bin","r");
    for(i=0;i=MAX;i++)
    {
        fread(&i,sizeof(int),1,fp);
    }
    fclose(fp);
    return 0;
}
*/
