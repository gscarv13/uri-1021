#include <stdio.h>
 
int main() {
 
    double peca1[3], peca2[3], total;
    
    scanf("%lf %lf %lf", &peca1[0], &peca1[1], &peca1[2]);
    scanf("%lf %lf %lf", &peca2[0], &peca2[1], &peca2[2]);
    
    total = (peca1[1]*peca1[2])+(peca2[1]*peca2[2]);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}