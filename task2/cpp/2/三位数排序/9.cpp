#include<cstdio>
using namespace std;
main()
{
    int x,y,z,a;
    scanf("%d %d %d",&x,&y,&z);
    while((x<=y&&y<=z)==0)
    {
        if(x>y)
        {
            a=y;
            y=x;
            x=a;
        }
        if(y>z)
        {
            a=z;
            z=y;
            y=a;
        }
    }
    printf("%d %d %d",x,y,z);
    return 0;
}