#include <stdio.h>
int main(){
    int n,flag=1;
    printf("Enter number\n");
    if (scanf("%d", &n) != 1) return 1;  
    if(n <= 0){
        printf("Enter number greater than zero\n");
        return 0; 
    }
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag)
        printf("Prime number\n");
    else
        printf("Not prime number\n");
    return 0;
}