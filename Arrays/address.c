#include <stdio.h>

int main() {
    int n[5] = {1,2,3,4,5};
    printf("%p\n",&n[0]);
    printf("%p\n",&n[1]);
    printf("%p\n",&n[2]);
    printf("%p\n",&n[3]);
    printf("%p\n",&n[4]);
    return 0;
}