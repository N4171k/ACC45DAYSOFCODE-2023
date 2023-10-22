#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a, b, c, d;
        scanf ("%d%d%d%d",&a,&b,&c,&d);
        if(a==b || a==c || a==d)
        {
            printf("YES\n");
        }
        else if (a==(b+c) || a==(b+d) || a==(c+d) || a==(b+c+d))
        {
            printf ("YES\n");
        }
        /*else if (b==(c+d) || b==(a+c) || b==(c+a))
        {
            printf ("YES\n");
        }*/
        else
        {
            printf ("NO\n");
        }
    }
	// your code goes here
	return 0;
}
