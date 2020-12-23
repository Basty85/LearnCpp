#include "Chapter6.h"

int factorial_function(int fact) {
    int ret = 1;
    while (fact > 1)
        ret *= fact--;
    return ret;
}

void swap_function(int *val1, int *val2) {
    int swap = 0;
    swap = *val1;
    *val1 = *val2;
    *val2 = swap;
}