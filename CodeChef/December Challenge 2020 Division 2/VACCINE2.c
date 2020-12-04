//https://www.codechef.com/DEC20B/problems/VACCINE2

#include<stdio.h>
#include<math.h>
#include<string.h>

int cnt(int a, int d)
{
    if(a%d!=0)
    {
        return (a/d)+1;
    }
    else return a/d;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,d,i,r=0,nr=0,c=0;
        scanf("%d %d",&n,&d);
        for(i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            if(x>=80 || x<=9)
            {
                r++;
            }
            else nr++;
        }
        c+=cnt(r,d);
        c+=cnt(nr,d);
        printf("%d\n",c);
    }

    return 0;
}
