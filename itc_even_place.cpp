#include "str_easy.h"

string itc_even_place(string str){
    long long i = 1;
    string str_new;
    while (str[i] != '\0') {
        str_new = str_new + str[i];
        i = i + 2;}
    return str_new;}
