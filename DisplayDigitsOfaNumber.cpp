#include<iostream>
using namespace std;

main (){
	int n, resto;
	cin >> n;
	
	while (n > 0){
		resto = n%10;
		cout << resto;
		n = n/10;
	}
	return 0;
}