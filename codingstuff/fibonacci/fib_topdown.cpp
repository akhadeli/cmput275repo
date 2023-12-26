#include <iostream>
#include <unordered_map>

using namespace std;

int64_t fib(int n, unordered_map<int64_t, int64_t>& hash_table) {
    if (hash_table.find(n) == hash_table.end()) {
        if (n<2) {    
            hash_table[n] = n;
        } else {
            hash_table[n] = fib(n-1, hash_table)+fib(n-2, hash_table);
        }
    }
    return hash_table[n];
}

int main() {
    unordered_map<int64_t, int64_t> memo;
    cout << fib(200, memo) << endl;
}