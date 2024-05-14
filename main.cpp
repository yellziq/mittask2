#include <iostream>
#include <iostream>
using namespace std;
int fib(int n) {
    if (n <= 2) {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;
    cout << "значение n  ";
    cin >> n;
    int result = fib(n);
    cout << "fib(" << n << ") = " << result << endl;
    return 0;
}