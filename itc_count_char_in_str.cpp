#include "str_easy.h"

int itc_count_char_in_str(char ch, string str) {
    int i = 0;
    int counter = 0;
    while (str[i] != '\0') {
        if (str[i] == ch)
            counter++;
        i++;}
    return counter;}
