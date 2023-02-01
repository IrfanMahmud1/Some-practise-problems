#include<stdio.h>
int take_radius();
float calculate(int r);
int main()
{
    int r;
    r=take_radius();
    calculate(r);
}

int take_radius()
{
    int n;
    scanf("%d",&n);
    return n;
}
float calculate(int r)
{
    float ans=3.14159*r*r;
    printf("%f",ans);
}
