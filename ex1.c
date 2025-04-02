#include <stdio.h>

int main(){
	
	int a=0,b,c = 3;
	
	puts("tente adivinhar o numero (de 1 a 10)");
		
	do{
		c--;
		
		scanf("%d",&b);
		if (b == 7){
			
			puts("parabens vc ganhou!!");
			break;
			
		}else{
			printf("Numero errado Tentativas restantes: %d \n",c);
		}
		
	}while(c > 0);
	
	puts("fim de jogo");
	
	
	
	
	
	
	return 0;
}
