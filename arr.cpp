//
// Created by danai on 11/8/18.
//

#include "arr.h"

bool arr::is_number_prime(int num) {
    bool is_prime=true;
    if (num <= 0) return false;
    for(int i = 2; i <= num / 2; ++i) {
        if(num % i == 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

void arr::reset_prime_indexes() {
    for (int i = 0; i < n; ++i) {
        if(this->is_number_prime(i)) {
            a[i] = 0;
        }
    }
}

void arr::data(int nn, int *aa) {
    nn = n;
    for (int i = 0; i < n; ++i) {
        aa[i] = a[i];
    }
}

