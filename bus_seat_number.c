#include <stdio.h>

int main(void) {
	// your code goes here
	int TC,Seat_num;
	scanf("%d",&TC);
	while(TC-->0){
	    scanf("%d",&Seat_num);
	if(Seat_num<=10&&Seat_num>0){
	    printf("Lower Double\n");
	}
	else if(Seat_num>10&&Seat_num<=15){
	    printf("Lower Single\n");
	}
	else if(Seat_num>15&&Seat_num<=25){
	    printf("Upper Double\n");
	}
	
	else if(Seat_num>25&&Seat_num<=30)
	    printf("Upper Single\n");
	}
		return 0;


}
