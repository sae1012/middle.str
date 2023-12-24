#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;


bool itc_isDigit(unsigned char c){
    return c >= '0' && c <= '9';
}


unsigned char itc_toUpper(unsigned char c){
    if(c >= 'a' && c <= 'z'){
        return c - 'a' + 'A';
    }
    else{
        return c;
    }
}


unsigned char itc_changeCase(unsigned char c){
    if(c >= 'a' && c <= 'z'){
        return c - 'a' + 'A';
    }
    else if(c >= 'A' && c <= 'Z'){
        return c - 'A' + 'a';
    }
    else{
        return c;
    }
}


bool itc_compare(string s1, string s2){
    int str1 = s1.length();
    int str2 = s2.length();
    if(str1 != str2){
        return false;
    }
    for(int i; i < str1; i++){
        if(s1[i] != s2[i]){
            return false;
        }
    }
    return true;
}


int itc_countWords(string str) {
    int count = 0;
    bool word = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            if (!isLetter(str[i]) && str[i] == '#') {
                return 0;
            }

            if (!word) {
                count++;
                word = true;
            }
        } else {
            word = false;
        }
    }

    return count;
}
