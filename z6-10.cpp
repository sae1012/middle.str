#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;


string itc_maxCharWord(string str){
    string maxW = "";
    string tekushW = "";
    bool space = false;

    for (int i = 0; i < str.length(); i++){
        if (str[i] != ' '){
            tekushW += str[i];
        } else {
            space = true;
            if (tekushW.length() > maxW.length()){
                maxW = tekushW;
            }
            tekushW = "";
        }
    }

    if (tekushW.length() > maxW.length()){
        maxW = tekushW;
    }

    if (space){
        return maxW;
    } else{
        return "error";
    }
}


char itc_sameChar(string str){
    int len = 0;
    char c;
    for (int i = 0; str[i] != '\0'; i++){
        len++;
        c = str[i];
        for (int j = i + 1; str[j] != '\0'; j++){
            if (str[j] == c) {
                return c;
            }
        }
    }
    return ' ';
}


bool itc_isFirstInSecond(string s1, string s2){
    int len1 = 0;
    int len2 = 0;
    for (int i = 0; s1[i] != '\0'; i++){
        len1++;
    }
    for (int i = 0; s2[i] != '\0'; i++){
        len2++;
    }
    if (len1 > len2){
        return false;
    }
    for (int i = 0; i <= len2 - len1; i++){
        bool f = true;
        for (int j = 0; j < len1; j++){
            if (s1[j] != s2[i + j]){
                f = false;
                break;
            }
        }
        if (f){
            return true;
        }
    }
    return false;
}


string itc_Cezar(string str, int k){
    string res = "";
    int abc = 26;

    for (int i = 0; i < str.length(); i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            int a = ((str[i] - 'a' + k) % abc + abc) % abc;
            res += a + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            int a = ((str[i] - 'A' + k) % abc + abc) % abc;
            res += a + 'A';
        }
        else{
            res += str[i];
        }
    }

    return res;
}


string itc_rmFreeSpace(string str) {
    string res;
    bool space = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (!space) {
                res += str[i];
                space = true;
            }
        } else {
            res += str[i];
            space = false;
        }
    }
    return res;
}
