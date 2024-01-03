#include<stdio.h>
void main(){
    int a[10],i=1,n,sum=0;
    float avg;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d ",&a[i]);
        sum+=a[i];
        i++;
    }
    avg=sum/n;
    printf("%d,%d",sum,avg);
}