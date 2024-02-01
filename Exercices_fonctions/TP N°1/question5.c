#include <stdio.h>

unsigned int fonction(unsigned int n) {
    if (n == 0) {
        return 1;
    }
    unsigned int result = 1;
    for (unsigned int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    unsigned int n;
    scanf("%u", &n);
    printf("%u\n",fonction(n));

    return 0;
}