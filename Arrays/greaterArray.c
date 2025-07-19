#include <stdio.h>

int main() {
    int x,i,n,count=0;
    x=4;
    printf("Enter the number of element array: ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n ;i++)
    {
        printf("Enter the element[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if (arr[i]>x)
        {
           count++;
        }
        
    }
    printf("There are %d value is greater than value of X.\n",count);
    return 0;
}