#include <iostream>
using namespace std;

int main (){
	int n, m, r, i=0;
	cin >> n;
	m = n;

	while (n > 0){
		r = n % 10;
		n = n / 10;
		i = i*10 + r;
	}
	
	if (m == i){
		cout << "Yes, it is Palindrome";			
	}
	else{
		cout << "No, it is not a Palindrome";
	}

	
	return 0;
}