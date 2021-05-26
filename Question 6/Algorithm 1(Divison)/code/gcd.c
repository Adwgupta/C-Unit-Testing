#include "gcd.h"

//Algorithms taken from assignment sheet/specifcations

//Algorithm 1: Division based
int function_gcd1(int a, int b) {
    int t;
    while (b != 0) {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}

//Algorithm 2: Subtraction based
int function_gcd2(int a, int b) {
    while (a != b) {
        if (a > b)
            a -=  b;
        else
            b -= a;
    }
    return a;
}

//Algorithm 3: Recursive
int function_gcd3(int a, int b) {
    if (b == 0)
        return a;
    else
        return function_gcd3(b, a%b);
}