#include <stdio.h>
void max(int a,int b ,int c){
    int max;
    if((a>b)&&(a>c)){
        max=a;
    }
    else if((b>c)&&(b>a)){
        max=b;
    }
    else{
        max=c;
    }
    printf("The maximum number is:%d\n",max);
}
int main(){
    int x,y,z;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&x,&y,&z);
    max(x,y,z);
    return 0;
}