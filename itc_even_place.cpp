#include "str_easy.h"
string itc_even_place(string str){
    long long i = 0;
    string str_new = "";
    if ((itc_len(str) == 1) || (itc_len(str) == 0)){
        return "-1";}
    while (str[i] != '\0') {
            if (i % 2 != 0){
                str_new += str[i];}
        i++;}
    return str_new;}
