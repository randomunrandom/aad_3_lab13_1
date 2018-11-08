//
// Created by danai on 11/8/18.
//

#ifndef AAD_3_LAB13_1_ARR_H
#define AAD_3_LAB13_1_ARR_H

#include <iostream>
using namespace std;

class arr {
private:
    int n;
    int* a;
public:
    arr(): n(0), a(nullptr){}
    explicit arr(int nn): n(nn), a(new int[n]){}
    arr(int nn, int* aa): n(nn), a(aa){}
    bool is_number_prime(int i);
    void reset_prime_indexes();
    void data(int nn, int* aa);
    void main();
};


#endif //AAD_3_LAB13_1_ARR_H
