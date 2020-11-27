#include<stdio.h>
#include<string.h>


int main()
{
    int n,s=0;
    scanf("%d",&n);
    while(n--)
    {
        float l,w,d,wt;
        int i;
        scanf("%f %f %f %f",&l,&w,&d,&wt);
        if(((l<=56.0 && w<=45.0 && d<=25.0) || (l+w+d<=125.0)) && wt<=7.0)
        {
            i=1;
        }
        else i=0;
        printf("%d\n",i);
        s+=i;
    }
    printf("%d\n",s);


    return 0;
}
