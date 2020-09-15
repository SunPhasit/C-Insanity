#include<stdio.h>

int Isprime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0) return i; // i is a factor of n
    }
    return 0; // n is prime
}
int ari_der(int n)
{
    int i=Isprime(n);
    if(n==1) return 0;
    else if(!i) return 1;
    else return (i*ari_der(n/i))+((n/i)*ari_der(i));
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",ari_der(n));
    main();
    //return 0;
}
