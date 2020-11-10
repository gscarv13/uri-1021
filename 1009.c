#include <stdio.h>
 
int main() {
 
    double sal, vendas, total;
    char nome;
    
    scanf("%s", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &vendas);
    
    total = sal + (vendas*0.15);
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}