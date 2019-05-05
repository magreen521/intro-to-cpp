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

		if(!pos_div_five){
			continue;
		}

		cout << "\n" << n/5;
	}
}