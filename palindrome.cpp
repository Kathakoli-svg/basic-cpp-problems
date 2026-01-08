#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	int dup = n;
    int revNum = 0;

    while (n != 0) {
        int ld = n % 10;
        if (revNum > INT_MAX/10 || revNum < INT_MIN/10)
        	return 0;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }

    if (dup=revNum)
		cout << "True";
	else
		cout << "False";
    
}
