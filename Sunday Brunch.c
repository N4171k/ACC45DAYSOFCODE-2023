//chef prepared brunch for 20 neighbours

//x --> no. of plates prepared by Chef
//y --> no. of plates taken by each neighbour

//find if Chef can feed all neighbours
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if( (x/y) >= 20)
	    {
	        printf("20\n");
	    }
	    else
	    {
	        printf("%d\n",x/y);
	    }
	}
	return 0;
}
