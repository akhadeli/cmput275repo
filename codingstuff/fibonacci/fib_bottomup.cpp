#include <iostream>
#include <unordered_map>

using namespace std;

int64_t fib(int n, int64_t *arr) {
    for (int i = 0; i < n+1; i++) {
        if (i < 2) {
            arr[i] = i;
        } else {
            arr[i] = arr[i-1]+arr[i-2];
        }
    }
    return arr[n];
}

int main() {
    int n = 200;
    int64_t *arr = new int64_t[n+1];
    cout << fib(n, arr) << endl;
    delete[] arr;
}