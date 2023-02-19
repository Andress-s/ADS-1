// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    int count_d = 0;
    for (int i = 1; i <= value; i++) {
        if (value % i == 0) {
            ++count_d;
        }
    }
    if (count_d == 2) {
        return true;
    }
    else {
        return false;
    }
}

uint64_t nPrime(uint64_t n) {
    const int size = 100;
    int arr[size] = { 0 };
    int p = 0;
    int i = 0, j = 0, t = 0;
    for (i = 0; i < 100; i++) {
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
}

uint64_t nextPrime(uint64_t value) {
    const int size = 100;
    int arr[size] = { 0 };
    int p = 0;
    int i = 0, j = 0, t = 0;
    for (i = 0; i < 100; i++) {
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
        if (arr[i] == value) {
            return arr[i + 1];
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    const int size = 100;
    int arr[size] = { 0 };
    int pos = 0;
    int i = 0, j = 0, t = 0;
    for (i = 0; i < 100; i++) {
        t = 0;
        for (j = 1; j <= i; j++) {
            if ((i % j) == 0) {
                t += j;
            }
        }
        if (t - 1 == i) {
            arr[pos] = i;
            pos++;
        }

    }
    int sum = 0;
    for (int i = 0; i < hbound - 1; i++) {
        sum += arr[i];
    }
    return sum;
}
