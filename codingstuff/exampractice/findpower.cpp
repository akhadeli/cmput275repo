#include <iostream>

unsigned int pow(unsigned int base, unsigned int exp) {
    unsigned int num = 1;
    for (int i = 0; i < exp; ++i) {
        num *= base;
    }
    return num;
}

int main() {
    unsigned int val = 2000;
    unsigned int cnt = 0;
    unsigned int k = 2;
    while(true) {
        if (val < 4) {
            cnt = 1;
            break;
        }
        if (pow(k, cnt) <= val) {
            ++cnt;
        } else {
            --cnt;
            break;
        }
    }
    std::cout << cnt << std::endl;
}