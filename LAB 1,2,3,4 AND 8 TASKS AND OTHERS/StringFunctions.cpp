#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int len;
    strcpy( str3, str1);
    cout << "strcpy(str3,str1): " << str3 << "\n";
    strcat ( str1, str2);
    cout << "strcat(str1,str2): " << str1 << "\n";
    len = strlen(str1);
    cout << "strlen(str1): " << len << " \n";
    return 0;
}