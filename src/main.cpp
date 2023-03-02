#include <cstdio>
#include <config.h>

#include <lib.h>

int main() {
    BlsInit();
    int i = TestAddition();
    printf("result = %d\n", i);
}

