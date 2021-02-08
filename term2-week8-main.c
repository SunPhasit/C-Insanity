#include<stdio.h>
#define NAME 100
/*#define LIST 100
typedef struct Contacts {
    char name[NAME],number[11];
}contacts;*/

int menu()
{
    int op;
    printf("1. Add new contact 2. Search contacts 3. Exit\nWhat do you want to do?: ");
    scanf("%d",&op);
    if(op==1) cadd();
    if(op==2) csearch();
    if(op==3) return 0;
    else
    {
        printf("Error - Unknown value\n");
        menu();
    }
}

void cadd()
{
    char name[NAME],number[11];
    FILE *fp;
    fp=fopen("contact_list.bin","a");
    printf("Enter name: ");
    gets(name);
    fwrite(name,1,sizeof(name),fp)

}

void csearch()
{

}

int main()
{
    int i=1;
    while(i) i=menu();
    return 0;
}
