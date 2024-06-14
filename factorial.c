#include<stdio.h>

int main() {
    int n, i, sum = 0, fact = 1;
    printf("Enter the n value: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        fact *= i;
        printf("%d ,", fact);
        sum += fact;
    }
    printf("\nThe sum value is %d", sum);
    return 0;
}
