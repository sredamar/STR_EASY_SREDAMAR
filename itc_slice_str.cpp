#include "str_easy.h"

string itc_slice_str(string str, int s_start, int s_end) {
    long long len1 = itc_len(str);
    string res = "";
    for (int i = s_start; i <= mymin_string(s_end, len1 - 1); i++) {
        res = res + str[i];}
    if (s_end < s_start) {
        return str;}
return res;}
