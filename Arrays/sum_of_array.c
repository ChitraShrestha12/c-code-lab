#include <stdio.h>

int main() {
    int sum,num[5] = {1,2,3,4,5};
    sum=0;
    for(int i=0;i<5;i++){
        sum+=num[i];
    }
    printf("The sum of array is %d.\n",sum);
    return 0;
}