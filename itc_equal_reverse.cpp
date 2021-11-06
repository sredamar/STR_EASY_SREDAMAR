#include "str_easy.h"

bool itc_equal_reverse(string str) {
    string reversed;
    reversed = itc_reverse_str(str);
    if (str == reversed)
        return true;
    else
        return false;}
