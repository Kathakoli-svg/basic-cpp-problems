#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum =0;
	int dup = n;
    int revNum = 0;
	
	while (n>0){
		cnt = cnt + 1;
		n = n / 10;
	}
    while (n>0) {
        int ld = n % 10;
        if (revNum > INT_MAX/10 || revNum < INT_MIN/10)
        	return 0;
        sum = sum + pow;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }

    if (dup=sum)
		cout << "True";
	else
		cout << "False";
    
}
