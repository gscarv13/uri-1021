#include <stdio.h>
 
int main() {
 
    double a, b, c, media;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    a=a*2;
    b=b*3;
    c=c*5;
    media = (a+b+c)/10;
    printf("MEDIA = %.1lf\n", media);
 
    return 0;
}