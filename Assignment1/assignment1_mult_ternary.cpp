#include <iostream>

using namespace std;

int main(){
	int n;
	int pos_div_five;
	int result;

	while(1){
		cout << "\nEnter an integer: ";
		cin >> n;

		pos_div_five = (n>0)&&(n % 5 == 0);

		result = pos_div_five ? n/5 :-1;
		cout << "\n" << result;
	}
}