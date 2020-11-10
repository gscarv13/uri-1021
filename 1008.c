#include <stdio.h>
 
int main() {
 
    double num, hrs, sal, total;
    
    scanf("%lf", &num);
    scanf("%lf", &hrs);
    scanf("%lf", &sal);
    
    total = hrs*sal;
    
    printf("NUMBER = %.0lf\n", num);
    printf("SALARY = U$ %.2lf\n", total);
 
    return 0;
}