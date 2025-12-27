#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks\n");
    scanf("%d",&marks);
    switch (marks/10){
        case 10:
        printf("Grade is:A+\n");
        break;
        case 9:
        printf("Grade is:A\n");
        break;
        case 8:
        printf("Grade is:B\n");
        break;
        case 7:
        printf("Grade is:C\n");
        break;
        case 6:
        printf("Grade is:D\n");
        break;
        case 5:
        printf("Grade is:E\n");
        break;
        default:
        printf("Grade is:F\n");
        break;
    }
    return 0;
}