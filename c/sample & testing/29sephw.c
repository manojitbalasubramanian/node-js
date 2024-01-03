#include<stdio.h>
int main()
{
    int s , r , t , p;

    printf("principal amount:");
    scanf("%d", &p);

    printf("rate of intrest:");
    scanf("%d", &r);
    
    printf("time period:");
    scanf("%d", &t);

    s = p(1+r*t);

    printf("%f",s);

    return 0;
}