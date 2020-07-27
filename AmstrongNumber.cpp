#include <iostream>
using namespace std;

main (){
	int n, r, original, somaDosCubos=0;
	cin >> n;
	original = n;
	while (n > 0){
		r = n%10;
		n = n/10;
		somaDosCubos += (r*r*r);	
	}
	 if (somaDosCubos == original){
		cout << "Amstrong Number! \n";
	 }
	return 0;
}