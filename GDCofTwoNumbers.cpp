#include<iostream>
using namespace std;

int main(){
	int m, n;
	cin >> m;
	cin >> n;
	
	while (m != n){
		if (m > n){
			m = m - n;
		}else{
			n = n - m;
		}	
	}
	cout << m << " " << n;
	
	return 0;
}