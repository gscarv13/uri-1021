#include <stdio.h>
 
int main() {
 
    double cons, raio, pi, res;
    pi = 3.14159;
    cons = 4.0/3.0;
    
    scanf("%lf", &raio);
    
    raio = raio * raio * raio;
    res = cons*pi*raio;
    
    printf("VOLUME =  %.3lf", res);
 
    return 0;
}