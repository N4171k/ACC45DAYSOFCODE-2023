#include <stdio.h>

int main(void) {
	// your code goes here
	int t,w,x,y,z,a,b;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d %d",&w,&x,&y,&z);
	    a = x-y;
	    b = a*z;
	    printf("%d\n",w+b);
	}
	return 0;
}
