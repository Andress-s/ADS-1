// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    int64_t count_d = 0;
    for (int64_t i = 1; i <= value; i++) {
        if (value % i == 0) {
            ++count_d;
        }
    }
    if (count_d == 2) {
        return true;
    } else {
        return false;
    }
}

uint64_t nPrime(uint64_t n) {
    const int64_t size = 10000;
    int64_t arr[size] = { 0 };
    int64_t p = 0;
    int64_t i = 0, j = 0, t = 0;
    for (i = 0; i < 10000; i++) {
        t = 0;
        for (j = 1; j <= i; j++) {
            if ((i % j) == 0) {
                t += j;
            }
        }
        if (t - 1 == i) {
            arr[p] = i;
            p++;
        }
    }
    for (int i = 0; i < p; i++) {
        if (i == n - 1) {
            return arr[i];
        }
    }
    return 0;
}

uint64_t nextPrime(uint64_t value) {
    const int64_t size = 10000;
    int64_t arr[size] = { 0 };
    int64_t p = 0;
    int64_t i = 0, j = 0, t = 0;
    for (i = 0; i < 10000; i++) {
        t = 0;
        for (j = 1; j <= i; j++) {
            if ((i % j) == 0) {
                t += j;
            }
        }
        if (t - 1 == i) {
            arr[p] = i;
            p++;
        }
    }
    for (int64_t i = 0; i < p; i++) {
        if (arr[i] == value) {
            return arr[i + 1];
        }
    }
    return 0;
}

uint64_t sumPrime(uint64_t  hbound)
{
    std::int64_t sum = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += 1;
        }
    }
    return sum;
}
