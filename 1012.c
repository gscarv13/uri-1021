#include <stdio.h>
 
int main() {
 
    double ent[3],r1,r2,r3,r4,r5;
    
    scanf("%lf %lf %lf", &ent[0], &ent[1], &ent[2]);
    
    r1 = (1.0/2.0)*ent[0]*ent[2];
    r2 = (ent[2]*ent[2])*3.14159;
    r3 = ((ent[0]+ent[1])/2)*ent[2];
    r4 = ent[1]*ent[1];
    r5 = ent[0]*ent[1];

    printf("TRIANGULO: %.3lf\n", r1);
    printf("CIRCULO:  %.3lf\n", r2);
    printf("TRAPEZIO: %.3lf\n", r3);
    printf("QUADRADO: %.3lf\n", r4);
    printf("RETANGULO: %.3lf\n", r5);
 
    return 0;
}