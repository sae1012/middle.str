#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;
bool isLetter(char buk){
    return ((buk >= 'A' && buk <= 'Z') || (buk >= 'a' && buk <= 'z') || (buk >= '�' && buk <= '�') || (buk >= '�' && buk <= '�'));
}
