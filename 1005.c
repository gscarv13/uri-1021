#include <stdio.h>

int main()
{
    double a, b, media;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    a=a*3.5;
    b=b*7.5;
    media = (a+b)/11;
    printf("MEDIA = %.5lf\n", media);
 
    return 0;
}