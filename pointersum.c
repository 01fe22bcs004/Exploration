#include<stdio.h>
int main(){
    int *p,*ptrl;
    int a=5,b=5,sum;
    p=&a;
    ptrl=&b;
    sum=*p+*ptrl;
    printf("%d\n",sum);
}