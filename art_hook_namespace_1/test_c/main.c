#include <stdio.h>
#include "foo.h"

unsigned add(unsigned a, unsigned b) {
    return a + b;
}

int main(){
    printf("main: 1 + 2 = %ud\n", add(1,2));
    foo_test();
    return 0;
}