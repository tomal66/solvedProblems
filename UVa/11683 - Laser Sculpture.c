#include<stdio.h>
#include<math.h>
#include<string.h>
int max(int x,int y)
{
    if(x>y) return x;
    else return y;
}

int main(){
    int r,c;
    while(scanf("%d %d",&r,&c)&&r!=0&&c!=0)
    {
        int i,j,s=0,h=r;
        for(j=0;j<c;j++)
        {
            int x;
            scanf("%d",&x);
            s+=max(0,h-x);
            h=x;
        }
        printf("%d\n",s);
    }
    return 0;

}
