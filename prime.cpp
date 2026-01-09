#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "The number:";
	cin >> n;
	int cnt=0;
	cout << "Is this number prime?" << endl;
	
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			cnt++;
			if((n/i) != i)
				cnt++;
		}
	}
	
	if(cnt==2)
		cout << "True";
	else
		cout << "False";
	return 0;
}
