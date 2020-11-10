#include <stdio.h>
 
int main() {
 
    double km, comb, resp;
    
    scanf("%lf", &km);
    scanf("%lf", &comb);
    
    resp = km/comb;
    
    printf("%.3lf km/l\n", resp);
 
    return 0;
}