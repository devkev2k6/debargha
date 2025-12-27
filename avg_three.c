#include <stdio.h>
void average(int a,int b,int c){
	int avg=(a+b+c)/3;
	printf("Average is:%d\n",avg);
}
int main(){
	int x,y,z;
	printf("Enter three integers\n");
	scanf("%d %d %d",&x,&y,&z);
	average(x,y,z);
    return 0;
}