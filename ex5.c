#include <stdio.h>

int main(){
	
	int a,b,i;
	
	for(a=0;a<=1;a++){
		for(b=0;b<=1;b++)
		printf("A: %d B: %d	  %d || %d = %d\n",a,b,a,b,(a||b));	
	}
	
	return 0;
}
