#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{  
	 int x,y;
	 scanf("%d%d",&x,&y);
	 if(x<y)
	 printf("%d\n",y-x);
	 else
	 printf("%d\n",x-y);
	}
	return 0;
}
