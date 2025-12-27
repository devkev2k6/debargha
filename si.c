#include <stdio.h>
int main(){
    double p,t,r;
    printf("Enter principal:\n");
    scanf("%lf",&p);
    printf("Enter time period in months:\n");
    scanf("%lf",&t);
    t=t/12.0;
    printf("Enter rate of interest:\n");
    scanf("%lf",&r);
    double si=(p*t*r)/100.0;
    printf("Simple Interest is:%lf\n",si);

}