#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d",&n);
        if(n%2==0 || n==1) printf("YES\n");
        else printf("NO\n");
        /* code */
    }
	// your code goes here
	return 0;
}
