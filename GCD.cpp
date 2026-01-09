#include <iostream>
using namespace std;

int gcd(int a, int b){
	while(a>0 && b>0){
	
		if(a>b)
			a = a%b;
		else
			b = b%a;
	}
	if(a==0)
		return b;
	else
		return a;
}

int main(){
	cout << "Enter two numbers: ";
	int a,b;
	cin >> a >> b;
	cout << "GCD is:" << gcd(a,b);
	return 0;
}
