#include<cstdio>
using namespace std;
main()
{
    int m,t,s,n;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0)
    {
        printf("0");
        return 0;
    }
    n=s/t;
    if(s%t!=0)
        n+=1;
    if(n>m)
        n=m;
    printf("%d",m-n);
    return 0;
}