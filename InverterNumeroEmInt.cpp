#include <iostream>
using namespace std;

main (){
	int n, r, original, nInvertido=0;
	cin >> n;
	original = n;
	
	while (n > 0){
		r = n%10;
		n /= 10;
		nInvertido = nInvertido*10 + r;

	}
	if (original == nInvertido){
		cout << "it's a Palindrome";
	}else{
		cout << "It's not a Palindrome";
	}

	return 0;
}