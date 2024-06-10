#include<stdio.h>

int main(){
    int a[20], n, i, j, k, key;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Original array: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(i = 1; i < n; i++){
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;

        printf("Iteration %d: ", i);
        for(k = 0; k < n; k++){
            printf("%d ", a[k]);
        }
        printf("\n");

        if(i == 5){
            printf("Result after 6th iteration: ");
            for(k = 0; k < n; k++){
                printf("%d ", a[k]);
            }
            printf("\n");
            break;
        }
    }

    return 0;
}
