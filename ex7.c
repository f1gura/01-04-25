
#include <stdio.h>

int main() {
    int a,b,c,d;
    puts("Digite 4 numeros:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    for(a;a>0;a--){
        printf("*");
    }
    putchar('\n');
    for(b;b>0;b--){
        printf("*");
    }
    putchar('\n');
    for(c;c>0;c--){
        printf("*");
    }
    putchar('\n');
    for(d;d>0;d--){
        printf("*");
    }
    return 0;
}
