#include "str_easy.h"

string itc_mysubstr(string s, int p, int c) {
    string res = "";
    for (int i = p; i < p + c; i++) {
        res = res + s[i];}
    return res;}
