
//https://www.codechef.com/DEC20B/problems/VACCINE1

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int d1,d2,v1,v2,p,D,V,d,v,T=0;
    scanf("%d %d %d %d %d",&d1,&v1,&d2,&v2,&p);
    if(d1==d2)
    {
        T=v1+v2;
        while(1)
        {
            if(T>=p)
            {
                break;
            }
            else
            {
                T+=(v1+v2);
                d1++;
            }
        }
        printf("%d\n",d1);
    }
    else
    {
        if(d1<d2)
        {
            D=d1;
            d=d2;
            V=v1;
            v=v2;
        }
        else
        {
            D=d2;
            d=d1;
            V=v2;
            v=v1;
        }
        int days=D-1;
        while(D<d)
        {
            if(T>=p)
            {
                break;
            }
            else{
                T+=V;
                days++;
            }
            D++;
        }
        while(1)
        {
            if(T>=p)
            {
                break;
            }
            else{
                T+=V+v;
                days++;
            }
            D++;
        }
        printf("%d\n",days);

    }
    return 0;
}
