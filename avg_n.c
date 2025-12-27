#include <stdio.h>

void average(int arr[], int n) {  
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double avg = (double)sum / n; 
    printf("Required average: %.2f\n", avg); 
}

int main() {
    int n;
    printf("Enter number of terms\n");
    scanf("%d", &n);
    
    
    if (n <= 0) {
        printf("Invalid number of terms\n");
        return 1;
    }
    
    int xyz[n]; 
    for (int i = 0; i < n; i++) {
        printf("Enter term\n");
        scanf("%d", &xyz[i]);
    }
    
    average(xyz, n);  
    return 0;
}