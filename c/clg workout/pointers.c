#include<stdio.h>
void main()
{
    int *p,a=10;
    
    p=&a;
    printf("%d\n",*p);
    printf("%p\n",&a);
    printf("%d\n",a);
    
    *p=20;
    printf("%d\n",*p);
    printf("%p\n",p);
    printf("%d\n",a);
    
    a=30;
    printf("%d\n",*p);
    printf("%p\n",&p);
    printf("%d\n",a);
}
