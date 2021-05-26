#include "avg_and_max.h"

double average(double array[], int size) {
    double sum = 0;

    for (int i = 0;  i < size /*- 1 this was the error as the function would only take in n-1 elements*/;  i++) {
        sum += array[i];
    }
    return sum/size;
}

double max(double array[], int size) {
    double max = 0;                     // set max to 0

    for (int i = 0;  i < size;  i++) {
        if(max < array[i])
            max = array[i];
    }
    return max;
}
