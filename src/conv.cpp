// Author:         abelpzhang
// Created:        Tue 03 Dec 2024 04:37:03 PM CST
// Last Modified:  Tue 03 Dec 2024 04:37:03 PM CST
// Copyright © 2024 abel. All Rights Reserved.

#include "../include/conv.h"

#include <iostream>

using namespace std;

void LinearConv(int *x, int xlen, int *y, int ylen, int *h, int hlen) {
    cout << "LinearConv: ";
    for (int i = 0; i < hlen; ++i) {
        int xi, yi, len;
        if (i < ylen) {
            xi = 0;
            yi = (ylen - 1) - i;
            len = i + 1;
        } else if (i >= xlen) {
            xi = (ylen - 1) + i - xlen;
            yi = 0;
            len = xlen - xi;
        } else {
            xi = i - 4;
            yi = 0;
            len = ylen;
        }
        for (int j = 0; j < len; ++j) {
            h[i] += x[xi + j] * y[yi + j];
        }
        cout << h[i] << " ";
    }
    cout << endl;
}

void CircleConv(int *x, int xlen, int *y, int ylen, int *h, int hlen) {
    cout << "CircleConv: ";
    for (int i = 0; i < hlen; ++i) {
        int yi = ylen - i - 1;
        for (int j = 0; j < xlen; ++j) {
            h[i] += x[j] * y[(yi + j) % ylen];
        }
        cout << h[i] << " ";
    }
    cout << endl;
}
