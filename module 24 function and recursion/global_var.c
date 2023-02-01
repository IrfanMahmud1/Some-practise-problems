#include<stdio.h>
int g=7;
void add_two_nums();
int main()
{
    int g=15;
    add_two_nums();
    printf("%d\n",g);
    {
        extern int g;
        printf("%d\n",g);
    }
}
void add_two_nums()
{
    int a,b,g=8;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
    printf("%d\n",g);
    g=g+2;
    printf("%d\n",g);
    {
        extern int g;
        printf("%d\n",g);
    }
}
