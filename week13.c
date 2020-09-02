
#include <stdio.h>
#include <math.h>
//Converting the temperature in degrees Celsius to degrees Fahrenheit.
float tempctof(float c)
{
    float f;
    f=1.8*c + 32.0;
    return f;
}
//Calculating the volume of a sphere from its surface area.
float spherevol(float a)
{
    float r,v;
    r=sqrt(a/(4*M_PI));
    v=(4*M_PI*r*r*r)/3.0;
    return v;
}
//Calculating compound interest
float comInt(float p,float i,float t)
{
    return p*(pow(1+(i/100),t)-1);
}
//Displaying a given number as a sum of two prime numbers
int isNPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if ((n%i)==0) return 0;
    }
    return 1;
}
void evensum(int n)
{
    int i=3,j=3;
    if((!(n%2))&&n>4)
    {
        while(i+j!=n)
        {
            while(!isNPrime(i)) ++i;
            while((i+j!=n)&&(j<n))
                ++j;
                while((!isNPrime(j))&&(j<n)) ++j;
            if(i+j!=n)
            {
                ++i;
                j=3;
            }
        }
        printf("%d = %d + %d\n",n,i,j);
    }
    else
        printf("ERROR : Invalid input\n");
}
void realquad(float a,float b,float c)
{
    printf("There are");
    if(b*b<4*a*c) printf(" no");
    printf(" real solutions for this quadratic equation.");
}
float Triarea(float a,float b,float c)
{
    float s;
    s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
void KFC()
{
    printf("2 cups all-purpose flour\n2/3 tablespoon salt\n1/2 tablespoon dried thyme leaves\n1/2 tablespoon dried basil leaves\n1/3 tablespoon dried oregano leaves\n1 tablespoon celery salt\n1 tablespoon ground black pepper\n1 tablespoon dried mustard\n3 tablespoons paprika (original recipe calls for 4 tablespoons)\n2 tablespoons garlic salt\n1 tablespoon ground ginger\n3 tablespoons ground white pepper\n2 teaspoons Accent Seasoning , optional (I left this out)\n1 cup buttermilk\n1 large egg\n1 chicken , cut into 10 pieces (2 wings, 2 legs, 2 thighs and 2 breasts each cut in half to make 4 breast pieces)\nvegetable oil for frying");
}
void calories()
{
    char s;
    printf("Please enter the person's biological sex (f for female, m for male) : ");
    fflush(stdin);
    scanf("%c",&s);
    if(s=='f') printf("Generally, the recommended daily intake for women is 2,000 calories");
    else if(s=='m') printf("Generally, the recommended daily intake for men is 2,500 calories");
    else
    {
        printf("ERROR : Invalid input\nRestarting...\n");
        calories();
    }
}


int main()
{
    char l;
    int n,o;
    float a,b,c;
    printf("======--- MENU ---======\nType 0 to exit\nType 1 to convert temperature from Celsius to Fahrenheit\nType 2 to calculate the volume of a sphere from its surface area\nType 3 to calculate the compound interest\n--4 is unfinished--\n");
    printf("Type 5 to tell if there are any real solutions for a quadratic equation\nType 6 to calculate the area of a triangle from its sides\nType 7 to print the original KFC recipe\nType 8 to tell how much calories a person should eat per day\n");
    printf("Enter the number : ");
    scanf("%d",&n);
    if(!n) return 0;
    if(n==1)
    {
        printf("\nConversion of temperature from Celsius to Fahrenheit\nEnter the temperature in degrees Celsius : ");
        scanf("%f",&a);
        printf("The temperature in Fahrenheit is %.2f",tempctof(a));
    }
    if(n==2)
    {
        printf("\nCalculating the volume of the sphere from its surface area\nEnter the surface area of the sphere : ");
        scanf("%f",&a);
        printf("The surface area of the sphere is %f",spherevol(a));
    }
    if(n==3)
    {
        printf("\nCalculating the compound interest\nEnter the principal amount of money, followed by the annual interest rate and time in years : ");
        scanf("%f %f %f",&a,&b,&c);
        printf("The compound interest is %f",comInt(a,b,c));
    }
    if(n==4)
    {
        printf("\nDisplaying a given even number larger than 4 as the sum of two prime numbers\nEnter the number : ");
        scanf("%d",&o);
        evensum(o);
    }
    if(n==5)
    {
        printf("Telling whether there are real solutions in a given quadratic function ax^2 + bx + c = 0\nEnter the value of a, followed by b and then c : ");
        scanf("%f %f %f",&a,&b,&c);
        realquad(a,b,c);
    }
    if(n==6)
    {
        printf("\nCalculating the area of the triangle from the lengths of its sides\nEnter the lengths of the sides : ");
        scanf("%f %f %f",&a,&b,&c);
        printf("The area is %f",Triarea(a,b,c));
    }
    if(n==7)
    {
        printf("\nPrinting the KFC original recipe...\n");
        KFC();
    }
    if(n==8)
    {
        printf("\nTelling how much calories a given person should eat per day\n");
        calories();
    }
    if(n<0||n>8)
    {
        printf("ERROR : Invalid input\nRestarting...\n\n\n");
        main();
    }
    printf("\nDo you wish to return to menu?\n(y or n) ");
    fflush(stdin);
    scanf("%c",&l);
    if(l=='y') main();
    else return 0;
}
