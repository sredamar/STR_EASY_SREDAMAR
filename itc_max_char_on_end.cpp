#include "str_easy.h"
int itc_max_char_on_end(string str) {
    int maximum = 0, counter = 0, length = itc_len(str);
    for (long long i = 0; i < length; i++) {
        if ((str[i] < '0') || (str[i] > '9')) {
            counter = 0;}
        if ((str [i] >= '0') && (str[i] <= '9')) {
            counter++;}
        if (counter > maximum) {
            maximum = counter;}}
return maximum;}
