#include <stdio.h>
#include <math.h>
 
int main() {
 
    double ent1[2], ent2[2], px, py, resp;
    
    scanf("%lf %lf", &ent1[0], &ent1[1]);
    scanf("%lf %lf", &ent2[0], &ent2[1]);
    
    px = ent2[0]-ent1[0];
    py = ent2[1]-ent1[1];
    
    px = px*px;
    py = py*py;
    
    resp = sqrt(px+py);
    
    printf("%.4lf\n", resp);
 
    return 0;
}