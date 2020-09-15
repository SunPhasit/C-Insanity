#include<stdio.h>

int checkNug(int n)
{
    if(n<6) return 0;
    if(n==6||n==9||n==20) return 1;
    else if(checkNug(n-20)) return (checkNug(n-20)+1);
    else if(checkNug(n-9)) return (checkNug(n-9)+1);
    else if(checkNug(n-6)) return (checkNug(n-6)+1);
    else return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(checkNug(n)) printf("%d\n",checkNug(n));
    else printf("Impossible\n");
    main();
    //return 0;
}
