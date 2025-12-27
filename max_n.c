#include <stdio.h>

int main() {
    int n, i, num, max;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    printf("Enter number 1: ");
    scanf("%d", &max);

    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if(num > max) {
            max = num;
        }
    }

    printf("The maximum value is: %d\n", max);
    return 0;
}