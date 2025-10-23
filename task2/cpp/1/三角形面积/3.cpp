#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
    float a,b,c,d;
    scanf("%f %f %f",&a,&b,&c);
    d=0.5*(a+b+c);
    printf("%.1f",sqrt(d*(d-a)*(d-b)*(d-c)));
    return 0;
}