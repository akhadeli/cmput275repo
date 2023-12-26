#include <iostream>

using namespace std;

unsigned int foo(unsigned int x) {
    if (x) {
        return foo(x/10) + (x%10);
    }
    else {
        return 0;
    }
}

int main() {
    for (int i = 0; i < 50; ++i) {
        cout << i << ": " << foo(i) << endl;
    }
    cout << endl;
}