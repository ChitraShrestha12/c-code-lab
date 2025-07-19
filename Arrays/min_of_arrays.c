#include <stdio.h>

int main() {
    int i,n,min;
    printf("Enter a value of array element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter a element[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(i=0;i<n;i++){
        if (min>arr[i])
        {
            min = arr[i];
        }
        
    }
    printf("The min value of given array is %d.\n",min);
    return 0;
}