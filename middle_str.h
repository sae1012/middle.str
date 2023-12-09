#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
#include <string>
using namespace std;
bool isLetter(char buk);
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);
int itc_countWords(string str);
#endif // MIDDLE_STR_H_INCLUDED
