#include <stdio.h>

int main()
{
    int i, j, n;
    int x;
    int count = 0;
    do
    {
        printf("Enter a positive integer for the array size: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Enter a positive integer only !\n");
        }

    } while (n <= 0);
    do
    {
        printf("Enter the target sum value (x): ");
scanf("%d", &x);
        if (x <= 0)
        {
            printf("Enter a positive integer only !\n");
        }

    } while (x <= 0);
    
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter a element[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            
            if (arr[i]+arr[j]==x)
            {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], x);
                count++;
            }
            
        }
    }
    printf("Total number of pairs with sum equal to %d: %d\n", x, count);
    return 0;
}