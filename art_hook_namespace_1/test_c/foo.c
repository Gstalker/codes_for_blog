#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

void foo_test(){
    printf("foo_test: 1 + 2 = %d\n", add(1,2));
}