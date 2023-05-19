#include <stdio.h>
#include <stdint.h>

void printbin_iterative(uint64_t n) {
    uint64_t i = 0ULL;
    for(i |= 1ULL << 63; i > 0; i /= 2) {
        (n & i) ? printf("1") : printf("0");
    }
    printf("\n");
}

int main() {
    printbin_iterative(123);

    return 0;
}
