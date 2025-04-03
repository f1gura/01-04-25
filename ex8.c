
#include <stdio.h>

int testa_par(int n){
    
    return (n%2==0)?1:2;
}
int main() {
    int n;
    while(1){
       puts("Digite um valor: (-1 para encerrar)");
       scanf("%d",&n);
       if(n!=-1){
           (testa_par(n)==1)?puts("Par!"):puts("Impar!");
       }else{
           break;
       }
    }
    puts("Testa par Encerrado!");
    
    return 0;
}
