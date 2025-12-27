#include <stdio.h>
int main (){
    int fact=1,n;
    printf("Enter number\n");

    if (scanf("%d", &n) != 1) return 1;  
    if(n <= 0){
        printf("Enter number greater than zero\n");
        return 0; 
    }

    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("Factorial=%d\n",fact);
    return 0;
}