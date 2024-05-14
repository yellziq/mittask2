#include <iostream>
using namespace std;
int fib(int n) {
    if (n == 2 || n == 3) {
        return 1;
    }
    if (n == 1) {
        return 0;
    }
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n;
    cout << "значение n  ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int result = fib(i);
        cout << result << std::endl;
        result = 0;
    }
}