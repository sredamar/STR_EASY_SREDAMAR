#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num) {
    long long len1, len2;
    len1 = itc_len(str1);
    len2 = itc_len(str2);
    if (len2 + num + 1 > len1) {
        return itc_mysubstr(str1, 0, num) + itc_mysubstr(str2, 0, len1 - num);}
    else {
        return itc_mysubstr(str1, 0, num) + str2 + itc_mysubstr(str1, num + len2, len1 - num - len2);}
return 0;}
