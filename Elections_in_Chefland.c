#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int people,maxage,age,count=0;
	    scanf("%d %d",&people,&maxage);
	    for(int i=0;i<people;i++)
	    {
	        scanf("%d",&age);
	        if(age>=maxage)
	        {
	            count++;
	        }
	    }
	    printf("%d\n",count);

	}
	return 0;
}
