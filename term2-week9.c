#include <stdio.h>
#include <stdlib.h> //<--- Deals with memory allocation
// malloc : memory allocation
/*
    char *p=NULL;
    p=malloc(sizeof(char));                ---> p -> [-char-]
    *p='J';                                ---> p -> ['J']
    printf("The letter is %c.\n",*p);      Output: The letter is J.
    free(p);                               frees the memory space
*/
// calloc : contigeous allocation <only works with 1d arrays, convert arrays of higher dimension to 1d for use>
/*
    int n, i;
    float *num;
    scanf("%d",&n);
    calloc(n, sizeof(float));              ---> num -> [-float-][-float-][-float-]...[-float-] <n slots>
    for(i=0;i<n;i++)
    {
        scanf("%f",&num[i]);
    }
    :
    :
    free(num);
*/
int main()
{
    return 0;
}
