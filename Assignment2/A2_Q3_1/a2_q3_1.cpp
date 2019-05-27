// //ORIGINAL
// #include <iostream>

// int main () {
// 	printNum (35) ;
// 	return 0;
// }

// void printNum (int number ) { std :: cout << number ; } //function should be defined before the main function


// //WAY 1
// #include <iostream>

// void printNum (int number ) { std::cout << number; }

// int main () {
// 	printNum (35) ;
// 	return 0;
// }


//WAY 2
#include <iostream>

void printNum(int number);

int main () {
	printNum (35) ;
	return 0;
}

void printNum (int number ) { std :: cout << number ; }