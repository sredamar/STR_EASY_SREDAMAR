#include "str_easy.h"

double itc_percent_lower_uppercase(string str) {
    double division, s = 0, p = 0;
    long long i = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
            p++;
        else if ((str[i] >= 'a') && (str[i] <= 'z'))
            s++;
        i++;}
    division = s / p;
    return division;}
