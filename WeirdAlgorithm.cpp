#include <iostream>
using namespace std;

void solve(long long n) {
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;

        cout << n << " ";
    }
}

int main() {
    long long t;
    cin >> t;
    cout << t << " ";
    solve(t);
    return 0;
}
