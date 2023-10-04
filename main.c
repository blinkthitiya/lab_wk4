#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float x1,x2;

    printf("enter your coefficients: ");
    scanf("%d %d %d",&a,&b,&c); //ax^2+bx+c

    puts("roots of the equation");

    //term a, x^2
    switch(a) {
        case 1: printf("x^2"); break;
        case 0: break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }

    //+ sign between a and b
    if(a!=0 && b>0) printf("+");

    //term b, x
    switch(b) {
        case 1: printf("x"); break;
        case 0: break;
        case -1: printf("-x"); break;
        default: printf("%dx",b);
    }

    //+ sign between b and c
    if((a!=0 || b!=0) && c>0) printf("+");

    //term c
    if(c!=0) printf("%d\n",c);

    puts("=0");

    //calculate roots of the equation
    float sq=b*b-4*a*c;
    if(a==0) {
        if(b!=0)
            printf("the answer is %.2f\n",-(float)c/b);
        else printf("no solution");
    }

    //if number inside square root is 0, there is one solution
    //if number inside square root is negative, there is no solution

    else {
        if(sq==0) printf("the answer is %.2f\n",-(float)b/(2*a));
        else if(sq<0) printf("no solution\n");
        else {
            printf("the answers are %.2f", (-b+sqrt(sq))/(2*a));
            printf(" and %.2f\n",(-b-sqrt(sq))/(2*a));
        }
    }

    return 0;
}
