#include <stdio.h>

int main()
{
    int i, n;
    int sum_even = 0;
    int sum_odd = 0;
    do
    {
        printf("Enter a positive integer for the array size: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Please enter a positive integer.\n");
        }
    } while (n <= 0);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum_even = sum_even + arr[i];
        }
        else
        {
            sum_odd = sum_odd + arr[i];
        }
    }
    printf("The sum of even indices is %d.\n", sum_even);
    printf("The sum of odd indices is %d.\n", sum_odd);
    printf("The difference between sum of even and sum of odd is %d.\n", sum_even - sum_odd);
    return 0;
}