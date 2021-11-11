#include "str_easy.h"
string itc_even_place(string str){
    long long i = 1;
    long long len = itc_len(str);
    string str_new = "";
    if ((len < 2) || (len == 0)){
        return "-1";}
    while (str[i] != '\0') {
        str_new = str_new + str[i];
        i = i + 2;}
    return str_new;}
