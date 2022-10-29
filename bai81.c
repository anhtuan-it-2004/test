#include<stdio.h>

double Circumference(double r){
    return 2 * 3.14 *r;
}

int main(){
    double r;
    scanf("%lf", &r);
    printf("%f", Circumference(r));

    return 0;
}