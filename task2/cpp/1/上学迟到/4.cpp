#include<stdio.h>
using namespace std;
int main()
{
    int s,v,t;
    scanf("%d %d",&s,&v);
    t=s/v+10;
    if((s%v)!=0)
    {
        t=t+1;
    }
    int x=8,y=0;
    while(t!=0)
    {
        if(t>=60)
        {
            t=t-60;
            x=x-1;
        }
        if(t<60&&t>0)
        {
            x=x-1;
            y=60-t;
            t=0;
        }
        if(x<0)
        {
            x=x+24;
        }
    }
    if(x<10)
    {
        if(y>=10)
        {
            printf("0%d:%d",x,y);
        }
        if(y<10)
        {
            printf("0%d:0%d",x,y);
        }
    }
    if(x>=10)
    {
        if(y>=10)
        {
            printf("%d:%d",x,y);
        }
        if(y<10)
        {
            printf("%d:0%d",x,y);
        }
    }
    return 0;
}