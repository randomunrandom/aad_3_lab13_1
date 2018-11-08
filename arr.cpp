//
// Created by danai on 11/8/18.
//

#include "arr.h"

bool arr::is_number_prime(int num) {
    bool is_prime=true;
    if (num < 0) return false;
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

void arr::main() {
    int n, *a;
    cout << "программа находит элементы массива с индексами-натуральными числами и обнуляет их" << endl;
    cout << "введите размер массива(n): ";
    cin >> n;
    while(n <= 0) {
        cout << "введите натуральное число: ";
        cin >> n;
    }
    a = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i << "-й элемент массива: ";
        cin >> a[i];
    }
    arr el(n, a);
    this->reset_prime_indexes();
    this->data(n, a);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}
