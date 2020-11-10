#include <stdio.h>
 
int main() {
 
    int ent, hora, min, seg, t1, t2;
    
    scanf("%d", &ent);
    
    hora = ent/3600;
    t1 = ent-(hora*3600);
    
    min = t1/60;
    t2 = t1-(min*60);
   
    seg = t2;
    
    printf("%d:%d:%d\n", hora, min, seg);
    
    return 0;
}