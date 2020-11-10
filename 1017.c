#include <stdio.h>
 
int main() {
 
    double tempo, vel, total;
    
    scanf("%lf", &tempo);
    scanf("%lf", &vel);
    
    total = (vel*tempo)/12;
    
    printf("%.3lf\n", total);
 
    return 0;
}