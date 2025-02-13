//make a function that receives an array of integers, its size and some value k. The array consists of values between 0 and k (included)
//if the number of ocurrences of any value in the array is equal to the value itself, return 1. Otherwhise, return 0
#include <stdio.h>
#include <stdlib.h>

//goyim solution (cringe)
// int FreqAsValue(int *arr, int size_bytes, int k) {
//     int i, j, count;
//     for(i = 0; i <= k; i++) {
//         count = 0;
//         for(j = 0; j < size_bytes/sizeof(int); j++) {
//             if(arr[j] == i) {
//                 count++;
//             }
//         }
//         if(count == 0 || count == i) {
//             continue;
//         } else {
//             return 0;
//         }
//     }
//     return 1;
// }

//juden solution (based and redpilled)
int FreqAsValue(int *arr, int size_bytes, int k) {
    int *countArr;
    int i;

    countArr = (int *)calloc((k + 1), sizeof(int)); //k + 1 bc the number are in the the range 0 - k so the array should include the 0
    if(countArr == NULL) {
        printf("Allocation error.\n");
        exit(0);
    }

    for(i = 0; i < size_bytes/sizeof(int); i++) {
        countArr[arr[i]]++;
    }

    for(i = 0; i < k + 1; i++) {
        if(countArr[i] != i) {
            free(countArr);
            return 0;
        }
    }

    free(countArr);
    return 1;
}
//tbh this was fucking genius

int main() {
    int *arr;
    int size, k;
    printf("Type the number of elements in the array: ");
    scanf("%d", &size);
    printf("\nType the number for the array upper limit: ");
    scanf("%d", &k);

    arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL) {
        printf("Allocation error.\n");
        exit(0);
    }
    int i;
    for(i = 0; i < size; i++) {
        printf("Type the %dth element of the array: ", i);
        scanf("%d", &arr[i]);
    }
    
    //- DOCTOR! ARE YOU SURE THIS WILL WORK? o_o
    //- I HAVE NO IDEA!!! :D 
    printf("%d\n", FreqAsValue(arr, size * sizeof(int), k));

    free(arr);
    return 0;
}
