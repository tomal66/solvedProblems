// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1365

#include<stdio.h>
#include<math.h>
#include<string.h>

int sht(int a)
{
    int c;

    while(1)
    {
        c=a;
        int s=0,i;
        for(i=0;i<3;i++)
        {
            s+=c%10;
            c=c/10;
        }
        a=s;
        if(a/10==0) break;
    }
    return a;
}

int num(char x[])
{
    int n=strlen(x),i,k=0;
    for(i=0;i<n;i++)
    {
        int m=x[i];
        if(m>=97 && m<=122)
        {
            k+= (m-96);
        }
        else if(m>=65 && m<=90)
        {
            k+= (m-64);
        }
    }

    return k;
}

int main()
{
    char n1[30],n2[30];
    while(fgets(n1,30,stdin)!=0)
    {
        fgets(n2,30,stdin);
        int x1,x2;
        float x,y;
        x1=num(n1);
        x2=num(n2);
        x1=sht(x1);
        x2=sht(x2);
        if(x1<x2)
        {
            x=x1;
            y=x2;
        }

        else
        {
            x=x2;
            y=x1;
        }
        printf("%.2lf %%\n",(x/y)*100.00);

    }

    return 0;
}
