#include<cstdio>
using namespace std;
main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    while((a<=b&&b<=c)!=1)
    {
        if(a>b)
        {
            d=b;
            b=a;
            a=d;
        }
        if(b>c)
        {
            d=c;
            c=b;
            b=d;
        }
    }
    if((a+b>c)==0)
    {
        printf("Not triangle\n");
        return 0;
    }
    else
    {
        if(a*a+b*b==c*c)
        {
            printf("Right triangle\n");
        }
        else if(a*a+b*b>c*c)
        {
            printf("Acute triangle\n");
        }
        else if(a*a+b*b<c*c)
        {
            printf("Obtuse triangle\n");
        }
        if(a==b||b==c||a==c)
        {
            printf("Isosceles triangle\n");
        }
        if(a==b&&b==c)
        {
            printf("Equilateral triangle\n");
        }
    }
    return 0;
}