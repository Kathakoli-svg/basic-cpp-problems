#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dup = n;
    int cnt = 0;
    int sum = 0;

    int temp = n;

    // Count digits
    while (temp > 0) {
        cnt++;
        temp /= 10;
    }

    temp = n;

    // Calculate Armstrong sum
    while (temp > 0) {
        int ld = temp % 10;
        sum += pow(ld, cnt);
        temp /= 10;
    }

    if (sum == dup)
        cout << "True";
    else
        cout << "False";

    return 0;
}
