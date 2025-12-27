#include <stdio.h>
int main(){
    int n;
    printf("Enter number of terms\n");
    if (scanf("%d", &n) != 1) return 1;  
    if(n <= 0){
        printf("Enter number greater than zero\n");
        return 0; 
    }
    int sum=0,a=0;
    for(int i=0;i<n;i++){
        printf("Enter term number %d\n",(i+1));
        scanf("%d",&a);
        sum+=a;
    }
    printf("Required sum:%d\n",sum);
    return 0;
}