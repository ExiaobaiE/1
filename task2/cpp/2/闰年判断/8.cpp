#include<cstdio>
using namespace std;
main()
{
    int x;
    scanf("%d",&x);
    if(x%100==0)
    {
        if(x%400==0)
        { printf("1");}
        else 
        {
            printf("0");
        }
    }
    else
    {
        if(x%4!=0){ printf("0");}
        else{
            printf("1");
        }
    }
    return 0;
}