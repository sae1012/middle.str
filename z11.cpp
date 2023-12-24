#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;


bool itc_isIp(string str) {
    int count = 0;
    string num = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            if (num == "" || num.length() > 3) {
                return false;
            }
            int val = stoi(num);
            if (val < 0 || val > 255) {
                return false;
            }
            count++;
            num = "";
        }
        else if (isDigit(str[i])) {
            num += str[i];
        }
        else {
            return false;
        }
    }
    if (count != 3 || num == "" || num.length() > 3) {
        return false;
    }
    int val = stringToInt(num);
    if (val < 0 || val > 255) {
        return false;
    }
    return true;
}
