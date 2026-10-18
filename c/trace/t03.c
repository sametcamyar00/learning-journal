#include <stdio.h>

int main(void) {

    int i = 5;
    int a = i++;
    int b = ++i;

    printf("%d %d %d\n", a, b, i);

    return 0;
}