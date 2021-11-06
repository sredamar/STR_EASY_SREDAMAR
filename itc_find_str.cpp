#include "str_easy.h"

int itc_find_str(string str1, string str2) {
    int i1 = 0, i2 = 0;
    long long len1, len2;
    len1 = itc_len(str1);
    len2 = itc_len(str2);
    while ((i1 < len1) && (i2 < len2)) {
        if (str1[i1] == str2[i2]) {
            i2++;}
        else {
            i2 = 0;}
    i1++;}
    if (i2 == len2) {
        return i1 - len2;}
    else {
        return -1;}
return 0;}
