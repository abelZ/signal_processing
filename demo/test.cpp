// Author:         abelpzhang
// Created:        Tue 03 Dec 2024 04:37:03 PM CST
// Last Modified:  Tue 03 Dec 2024 04:37:03 PM CST
// Copyright © 2024 abel. All Rights Reserved.

#include "../include/conv.h"

int main(int argc, char* argv[]) {
    int x[8] = {1, 5, 7, 3, 2, 1, 6, 9};
    int y_[5] = {2, 4, 6, 1, 3};
    int y[5] = {3, 1, 6, 4, 2};
    int y2[8] = {3, 1, 6, 4, 2, 0, 0, 0};
    int y3[8] = {0, 0, 0, 3, 1, 6, 4, 2};
    int h1[12] = {0};
    int h2[8] = {0};
    LinearConv(x, 8, y, 5, h1, 12);
    CircleConv(x, 8, y3, 8, h2, 8);
    return 0;
}
