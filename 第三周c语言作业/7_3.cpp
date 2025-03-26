#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float principal, time;
    if (scanf("%f%f", &principal, &time) != 2) {
        return 1;
    }

    double rate;
    if (time == 0.5f) {
        rate = 0.0255;
    } else if (time == 1.0f) {
        rate = 0.0275;
    } else if (time == 2.0f) {
        rate = 0.0335;
    } else if (time == 3.0f) {
        rate = 0.04;
    } else if (time == 5.0f) {
        rate = 0.0475;
    } else {
        return 1;
    }

    double total = principal * (1 + rate * time);
    printf("%.2f\n", total);
    return 0;
}