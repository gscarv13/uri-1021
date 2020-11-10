#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int r1, r2, abs1, abs2, n1,n2,n3;
    
    scanf("%i %i %i", &n1, &n2, &n3);
    
    abs1 = n1-n2;
    abs1 = abs(abs1);
    
    r1 = (n1+n2+abs1)/2;
    
    abs2 = r1-n3;
    abs2 = abs(abs2);
    
    r2 = (r1+n3+abs2)/2;
     
    printf("%i eh o maior\n", r2);
 
    return 0;
}