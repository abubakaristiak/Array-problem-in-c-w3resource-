/*
3. Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<n; i++){
        sum = sum+ar[i];
    }
    printf("%d",sum);
    return 0;
}