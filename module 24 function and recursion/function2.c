#include<stdio.h>
void solve();
int take_value();

int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        solve();
    }
}
void solve()
{
    int a,b;
    a= take_value();
    b= take_value();
    printf("%d\n",a+b);
}
int take_value()
{
    int n;
    scanf("%d",&n);
    return n;
}
