#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number of element array: ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n ;i++)
    {
        printf("Enter the element[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n ;i++)
    {
        if (i%2==0)
        {
            arr[i]+=10;
            printf("%d\n",arr[i]);
        }
        else{
            arr[i]*=2;
            printf("%d\n",arr[i]);
        }
        
    }
    
    return 0;
}