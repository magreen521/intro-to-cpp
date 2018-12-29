#include <iostream>

using namespace std;

void for_world(int n){
	cout << "\nPrinted with a for loop:\n";
	for(int i = 0;i<n;i++){
		cout <<"Hello, World!\n";
	}
}

void while_world(int n){
	cout << "\nPrinted with a while loop:\n";
	int i = 0;
	while(i<n){
		cout << "Hello, World!\n";
		i++;
	}
}

void do_world(int n){
	cout << "\nPrinted with a do while loop:\n";
	int i = 0;
	do{
		cout << "Hello, World!\n";
		i++;
	}while(i<n);
}

int main(){
	const char * hello_world = "Hello, World!\n";

	cout << "Printed with a const char *:\n";
	cout << hello_world;
	
	cout << "\nEnter an integer: ";
	int n;
	cin >> n;

	for_world(n);
	while_world(n);
	do_world(n);

	return 0;
}