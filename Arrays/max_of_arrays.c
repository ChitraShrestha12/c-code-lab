#include <stdio.h>

int main() {
    int i,max=0,n;
    printf("Enter a value of array element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter a element[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
    printf("The max value of given array is %d.\n",max);
    return 0;
}