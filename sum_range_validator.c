#include <stdio.h>

typedef enum {
    OK = 0,
    ERR_INVALID_INPUT,
    ERR_OUT_OF_RANGE
} Result;

Result run(long long *out_sum) {
    long long n;

    if (scanf("%lld", &n) != 1) return ERR_INVALID_INPUT;
    if (n < 0 || n > 100) return ERR_OUT_OF_RANGE;

    *out_sum = n * (n + 1) / 2;
    return OK;
}

int main(void) {
    long long sum = 0;
    Result r = run(&sum);

    if (r == OK) {
        printf("%lld\n", sum);
    } else if (r == ERR_INVALID_INPUT) {
        printf("INVALID_INPUT\n");
    } else if (r == ERR_OUT_OF_RANGE) {
        printf("OUT_OF_RANGE\n");
    }
    return 0;
}
