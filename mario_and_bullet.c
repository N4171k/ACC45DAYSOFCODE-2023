#include <stdio.h>

int main(void) {
	
	int T, X, Y, Z, timed;
	scanf("%d", &T);
	while(T--){
	    scanf("%d %d %d", &X, &Y, &Z);
	    timed = Y/X;
	    if(timed<=Z){
	        printf("%d\n", (Z-timed));
	    }
	    else{
	        printf("%d\n",0);
	    }
	}
	return 0;
}
