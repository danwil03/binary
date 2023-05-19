#include <stdio.h>
#include <stdint.h>

void printbin_iterative(uint64_t n) {
    uint64_t i = 0ULL;
    for(i |= 1ULL << 63; i > 0; i /= 2) {
        (n & i) ? printf("1") : printf("0");
    }
    printf("\n");
}

void printbin_recursive_mod_helper(uint64_t n) {
    if(n > 1) {
        printbin_recursive_mod_helper(n / 2);
    }
    printf("%li", n % 2);
}

void printbin_recursive_mod(uint64_t n) {
    printbin_recursive_mod_helper(n);
    printf("\n");
}

int main() {
    printbin_iterative(123);
    printbin_recursive_mod(123);

    return 0;
}
