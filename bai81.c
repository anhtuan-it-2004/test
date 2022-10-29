    #include<stdio.h>

    double Circumference(double r){
        return 2 * 3.14 *r;
    }

    int main(){
        double r1, r2;
        scanf("%lf", &r1);
        printf("%f\n", Circumference(r1));
        scanf("%lf", &r2);
        printf("%f", Circumference(r2));

        return 0;
    }