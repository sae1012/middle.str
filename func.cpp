#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;
bool isLetter(char buk){
    return ((buk >= 'A' && buk <= 'Z') || (buk >= 'a' && buk <= 'z') || (buk >= 'À' && buk <= 'ß') || (buk >= 'à' && buk <= 'ÿ'));
}


int isDigit(char symbol){
    if (symbol >= '0' && symbol <= '9'){
        return 1;
    }
    else{
        return 0;
    }
}


int stringToInt(const string& str) {
    int res = 0;
    bool neg = false;
    int i = 0;
    if (str[0] == '-') {
        neg = true;
        i = 1;
    }
    for (; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            res = res * 10 + (str[i] - '0');
        } else {
            return 0;
        }
    }
    if (neg) {
        res = -res;
    }

    return res;
}
