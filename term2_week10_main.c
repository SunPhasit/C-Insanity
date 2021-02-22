#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LIST_LENGTH 100
#define NAME_LENGTH 100

datatype struct data
{
    char name[NAME_LENGTH],phnum[14];
    struct data *next;
}contact;
void add()
int main()
{
    int i,n=0,op;
    contact *head=NULL, *current=NULL, *p=NULL;
    scanf("%d",&op);
    if(op==1)
    {
        printf();
        scanf("%s", p->name);
        scanf("%s", p->phnum);
        if(n==0)
        {
            head=p;
        }
        else
        {
            current->next=p;
        }
        n++;
        current=p;
        current->next=NULL;
    }
    if(op==2)
    {
        
    }
    main();
}
