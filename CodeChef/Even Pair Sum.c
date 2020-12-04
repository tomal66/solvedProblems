//https://www.codechef.com/DEC20B/problems/EVENPSUM

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,n;
    scanf("%lld %lld",&a,&b);
    if((a*b) % 2 !=0)
    {
        n=(a*b/2)+1;
    }
    else
    {
        n=(a*b/2);
    }
    printf("%lld\n",n);
    }

    return 0;
}
