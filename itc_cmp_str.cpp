#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num) {
    long long len1 = itc_len(str1);
    long long len2 = itc_len(str2);
    string new_str = "";
    if (num > 0) {
    new_str += itc_slice_str(str1, 0, num - 1);
    new_str += itc_slice_str(str2, 0, (len1 - num));
    new_str += itc_slice_str(str1, num + len2, len1);}
    else if (num == 0) {
        new_str += itc_slice_str(str2, 0, len2 - 1);
        new_str += itc_slice_str(str1, len2, len1 - 1);}
    return itc_slice_str(new_str, 0, (len1 - 1));}

    
