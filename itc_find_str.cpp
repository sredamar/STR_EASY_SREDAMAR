#include "str_easy.h"
int itc_find_str(string str1, string str2){
    long long len1 = itc_len(str1), len2 = itc_len(str2), counter, i1 = 0, i2 = 0;
    while (i1 < len1){
        counter = 0;
        if (str1[i1] == str2[0]){
        for (long long i2 = 0; i2 < len2; i2++){
            if (str1[i1 + i2] == str2[i2])
                counter += 1;}}
        if (counter == len2)
            return i1;
    i1++;}
    return -1;}
