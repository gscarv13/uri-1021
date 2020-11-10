#include <stdio.h>
 
int main() {
    
    int ent, cem, cinq, vint, dez, cinc, dois, um, i;
    
    scanf("%d", &ent);
    i = ent;
    
    cem = (ent - (ent % 100));
    ent = ent-cem;
    cem = cem/100;
    
    cinq = (ent - (ent % 50));
    ent = ent-cinq;
    cinq = cinq/50;
    
    vint = (ent - (ent % 20));
    ent = ent-vint;
    vint = vint/20;
    
    dez = (ent - (ent % 10));
    ent = ent-dez;
    dez = dez/10;
    
    cinc = (ent - (ent % 5));
    ent = ent-cinc;
    cinc = cinc/5;
    
    dois = (ent - (ent % 2));
    ent = ent-dois;
    dois = dois/2;
    
    um = (ent - (ent % 1));
    ent = ent-um;
    um = um/1;
    
    printf("%d\n", i);
    printf("%d  nota(s) de R$ 100,00\n", cem);
    printf("%d  nota(s) de R$ 50,00\n", cinq);
    printf("%d  nota(s) de R$ 20,00\n", vint);
    printf("%d  nota(s) de R$ 10,00\n", dez);
    printf("%d  nota(s) de R$ 5,00\n", cinc);
    printf("%d  nota(s) de R$ 2,00\n", dois);
    printf("%d  nota(s) de R$ 1,00\n", um);
    
    return 0;
}