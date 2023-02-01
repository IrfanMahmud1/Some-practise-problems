#include<stdio.h>
int factorial(int n);
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",factorial(x));

}

int factorial(int n)
{
    if(n>0)
    {
        return n * factorial(n-1);
    }
    else
        return 1;
}
