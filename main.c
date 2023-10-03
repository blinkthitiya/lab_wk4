#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float x1,x2;

    printf("enter your coefficients: ");
    scanf("%d %d %d",&a,&b,&c);
    puts("roots of the equation");

    //1. term a
    //x^2
    switch(a) {
        case 1: printf("x^2"); break;
        case 0: break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }

    //2. + sign between a and b
    if(b>0) printf("+");

    //3. term b
    switch(b) {
        case 1: printf("x"); break;
        case 0: break;
        case -1: printf("-x"); break;
        default: printf("%dx",b);
    }

    //4. + sign between b and c
    if(c>0) printf("+");

    //5. term c
    printf("%d=0",c);

    //printf("%dx^2+%dx+%d=0",a,b,c)

    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);


    return 0;
}
