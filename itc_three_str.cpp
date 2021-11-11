string itc_three_str(string str1, string str2, string str3) {
int pos = itc_find_str(str1, str2), i = 0;
long long len1 = itc_len(str1);
long long len2 = itc_len(str2);
string res = "";
while (pos != -1) {
res = str3;
if ((pos > 0) && (pos != len1 - len2)) {
    str1 = itc_slice_str(str1, 0, pos - 1) + res + itc_slice_str(str1, pos + len2, len1 - 1);
    }
else if (pos == 0) {
    str1 = res + itc_slice_str(str1, len2, len1 - 1);
    }
else if (pos == len1 - len2){
    str1 = itc_slice_str(str1, 0, pos - 1) + res;
    }
    pos = itc_find_str(str1, str2);
    }
return str1;
}
