#include<stdio.h>
int main()
{
    int a=5;
    int* p=&a;
    printf("%p\n",p);
    int *k=&a;
    printf("%p\n",k);
    int** q=&p;
    printf("%p\n",q);
    **q=15;
    printf("%d\n",**q);
}
