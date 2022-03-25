/*
Реализация простейшей субд
Copyright 2022 <nidorina@student.21-shool.ru>
*/

#include <stdio.h>
#include <stdlib.h>
#include "./main.h"


int main() {
    double n;
    int code = input(&n, 2);
    printf("code=%d, n=%d", code, (int)n);
    return 0;
}

int input(double *n, int count) {
    int code = 0;
    char ch = '\0';
    while (1) {
        if (scanf("%lf%c", n, &ch) !=2) code = -1;
        if (code == 0 && (ch == ' ' || ch == '\n')) {
            count -= 1;
        } else {
            code = -1;
            break;
        }
        if (ch == '\n') break;
    }
    if (count != 0) code = -1;
    return code;
}

