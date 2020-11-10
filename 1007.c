#include <stdio.h>
 
int main() {
 
    int a,b,c,d,diferenca;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    diferenca = (a*b)-(c*d);
    
    printf("DIFERENCA = %d", diferenca);
 
    return 0;
}