#include <stdio.h>
 
int main() {
 
    int ent, anos, meses, dias, t1, t2;
    
    scanf("%d", &ent);
    
    anos = ent/365;
    t1 = ent-(anos*365);
    
    meses = t1/30;
    t2 = t1-(meses*30);
   
    dias = t2;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    
    return 0;
}