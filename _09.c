/*
9. Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/
#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    int min = INT_MAX;
    int max = INT_MIN;
    printf("\nInput the number of elements to be stored in the array :");
    scanf("%d", &n);
    printf("Input %d elements in the array\n",n);
    int ar[100];
    for(int i=0; i<n; i++){
        printf("element - %d :",i+1);
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<n; i++){
        if(ar[i]>max){
            max = ar[i];
        }     
    }
    for(int i=0; i<n; i++){
        if(ar[i]<min){
            min = ar[i];
        }
    }
    printf("Maximum element is : %d\n",max);
    printf("Minimum element is : %d\n",min);

    return 0;
}