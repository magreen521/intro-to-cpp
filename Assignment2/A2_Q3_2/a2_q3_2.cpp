//ORIGINAL
// #include <iostream>

// void printNum () { std :: cout << number; };

// int main () {
// 	int number = 35;
// 	printNum (number);
// 	return 0;
// }

// //WAY 1
// #include <iostream>

// void printNum (int number) { std :: cout << number; };

// int main () {
// 	int number = 35;
// 	printNum (number);
// 	return 0;
// }


//WAY 2
#include <iostream>

int number = 35;

void printNum () { std :: cout << number; };

int main () {
	printNum ();
	return 0;
}


//Way 1 is preferred because it does not use global variables