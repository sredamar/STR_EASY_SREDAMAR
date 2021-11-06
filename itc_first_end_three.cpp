#include "str_easy.h"

void itc_first_end_three(string str) {
    long long length;
    length = itc_len(str);
    if (length > 5)
        cout << str[0] << str[1] << str[2] << str[length - 3] << str[length - 2] << str[length - 1];
    else
        for (long long i = 0; i < length; i++) {
        cout << str[0];}}
