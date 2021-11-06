#include "str_easy.h"

string itc_reverse_str(string str) {
    long long i = 0, length;
    string str_new;
    length = itc_len(str);
    while (str[i] != '\0') {
    str_new = str_new + str[length - 1];
    length --;
    i++;}
    return str_new;}
