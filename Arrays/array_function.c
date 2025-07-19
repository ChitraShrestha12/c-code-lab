#include <stdio.h>
void swap(int n[]){
    int temp = n[0];
    n[0] = n[1];
    n[1] = temp;
}
int main() {
    int n[2] = {1,2};
    printf("Before swap: %d %d\n",n[0],n[1]);
    swap(n);
    printf("After swap:  %d %d\n",n[0],n[1]);
    return 0;
}