/*
10. Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/

#include<stdio.h>
int main()
{
    int n;
    int j=0, k=0;
    int ar[100], ar_even[100], ar_odd[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<n; i++){
        if(ar[i]%2==0){
            ar_even[j] = ar[i];
            j++;
            
        }
        else{
            ar_odd[k] = ar[i];
            k++;
        }
    }
    printf("EVEN: \n");
    for(int i=0; i<j; i++){
        printf("%d ",ar_even[i]);
    }
    printf("\nODD: \n");
    for(int i=0; i<k; i++){
        printf("%d ",ar_odd[i]);
    }
    
    return 0;
}