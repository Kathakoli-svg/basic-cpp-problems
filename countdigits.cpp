#include <iostream>
using namespace std;

int count(int n) {
    int cnt = 0;

    if (n == 0) return 1;   // edge case

    while (n != 0) {
        int lastDigit = n % 10; // not needed for counting, but kept as in image
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << count(n);
    return 0;
}
