#include "str_easy.h"

long long itc_len(string str) {
    long long i = 0, counter = 0;
    while (str[i] != '\0') {
        counter ++;
        i++;}
    return counter;}
