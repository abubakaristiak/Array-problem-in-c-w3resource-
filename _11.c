/*
11. Write a program in C to sort elements of an array in ascending order.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9
*/
// #include<stdio.h>
// int main()
// {
//     int n; 
//     int ar[100];
//     scanf("%d", &n);
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }
//     int ar_1[0];
//     for(int i=0; i<n; i++){
//         if(ar[i]>0){
//             ar_1[i]=ar[i];
//         }
//     }
//     for(int i=0; i<n; i++)
//         printf("%d ",ar_1[i]);

//     return 0;
// }


//from bard
#include <stdio.h>

int main() {
    int arr[100], n, i, j, min_idx, temp;

    printf("Enter the value of N\n");
    scanf("%d", &n);

    printf("Enter %d numbers \n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Selection sort algorithm using for loops
    for (i = 0; i < n - 1; i++) {
        // Find the index of the minimum element in the unsorted part
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
