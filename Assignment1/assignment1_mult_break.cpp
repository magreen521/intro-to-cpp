#include <iostream>

using namespace std;

int main(){
	int n;
	int pos_div_five;
	int result;

	while(1){
		cout << "\nEnter an integer: ";
		cin >> n;

		if(n<0){
			break;
		}

		pos_div_five = (n % 5 == 0);

		if(!pos_div_five){
			continue;
		}

		cout << "\n" << n/5;
	}

	cout << "\nGoodbye!";
}