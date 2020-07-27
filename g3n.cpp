#include<iostream>
using namespace std;

int main (){
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a > b){
		if (c > b){
			if (c > a){
			cout << "maximo = c\n";
			}
		}else{
			cout << "maximo a";
		}
	}
	else{
		if(b > c){
			cout <<"maximo b";
		}
		else {
			cout << "maximo c";
		}
	}
return 0;
}