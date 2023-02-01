#include<stdio.h>
int main()
{
    int a=6;
    int* p;
    int* q;
    p=&a;
    q=p;
    *q=15;
    printf("%d\n",a);
    printf("%d\n",*q);
}
