#include <stdio.h>

int main() {
    int n,product=1;
    printf("Enter a number of array element: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter a element[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
        product*=arr[i];
    }
    printf("The product of given array is %d.\n",product);
    return 0;
}