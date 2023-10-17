#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t>0)
    {
        int c,x,y;
        scanf("%d%d%d",&c,&x,&y);
        printf("%d\n",y*(c-x));
        t = t-1;
    }
}
