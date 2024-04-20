/*
4. Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
*/

// #include<stdio.h>
// int main()
// {
    
//     int ar_1[100], ar_2[100];
//     int n;
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar_1[i]);
//     }
//     for(int i=0; i<n; i++){
//         ar_2[i] = ar_1[i];
//     }
//     for(int i=0; i<n; i++){
//         printf("%d", ar_2[i]);
//     }
        
// }

#include<stdio.h>

int main() {
    int ar_1[100], ar_2[100];
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &ar_1[i]);
    }

    // Copy elements from ar_1 to ar_2
    for(int i = 0; i < n; i++) {
        ar_2[i] = ar_1[i];
    }

    printf("Elements of the copied array ar_2:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", ar_2[i]);
    }

    return 0;
}
