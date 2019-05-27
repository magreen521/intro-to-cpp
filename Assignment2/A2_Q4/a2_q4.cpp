#include <iostream>
using namespace std;

//4.1 Sum of Two Integers
// int sum(const int x, const int y){
// 	return x + y;
// }

//4.1 Sum of Two Doubles
// double sum(const double x, const double y){
// 	return x + y;
// }

//4.3 Write two more functions such that you can find the sum of anywhere between 2 and 4 integers
// int sum(const int x, const int y, const int z){
// 	cout << "Three Arguments \n";
// 	return x + y + z;
// }

// int sum(const int x, const int y, const int z, const int w){
// 	return x + y + z + w;
// }

//4.4 Take the sum of 2 to 4 integers using default arguments
// int sum(const int x, const int y, const int z = 0, const int w = 0){
// 	cout << "Default Arguments \n";
// 	return x + y + z + w;
// }

//4.5 Write a single sum function capable of handling an arbitrary number of integers
// int sum(const int arr[], const int length){
// 	int sum = 0;
// 	for(int i = 0; i < length; i++){
// 		sum += arr[i];
// 	}
// 	return sum;
// }

//4.6 Rewrite function from 4.5 using recursion instead of a loop. Pointer arithmetic may help.
int sum(const int arr[], const int length){
	cout << arr << "\n";
	return length == 0 ? 0 : *(arr) + sum (arr + 1, length - 1); //my modified version of the answer key's solution
	//return length == 1 ? *(arr): *(arr+length-1) + sum(arr,length-1); //my original solution
}

int main(){
	//4.2 The call below is a syntax error because overloaded function call is ambiguous. Neither of the functions has arguments (int, double). Although the compiler
	//can convert between numerical types as needed, it is unclear which argument should be converted
	//sum(1, 10.0)

	//4.3 and 4.4 Testing that 2 to 4 integers can be added
	//4.4 If sum(3, 5, 7) is called with the three argument function and the default argument function, there will an error because the compiler will not know if it
	//should call the three argument function or the default function with 3 arguments plus a default argument
	//cout << sum(1,2) << "\n";
	//cout << sum(3,5,7) << "\n";
	//cout << sum(1,2,3,4);

	//4.5 and 4.6 Testing function for arbitrary number of integers
	int arr[] = {2, 6, 8, 6, 7, 10};
	//https://www.geeksforgeeks.org/how-to-find-size-of-array-in-cc-without-using-sizeof-operator/
	int length = *(&arr + 1) - arr;
	cout << sum(arr, length);

	return 0;
}