#include <stdio.h>

int main(){
	
	int a=0,b,c;
	
	do{
		
		printf("digite o valor que caiu no dado ");
		scanf("%d", &a);
		
		if(a % 2 == 0){
			c += a;
		}else{
			
			puts("o numero que caiu e impar");
			break;
		}
	}while(1);
	
	
	printf("a soma dos numeros pares e: %d",c);
	

	
	return 0;
}
