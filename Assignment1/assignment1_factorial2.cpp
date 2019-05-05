# include <iostream >

using namespace std;

int main ()
{
	short number ;
	cout << " Enter a number : ";
	cin >> number ;

	while(number < 0){
		cout << "Cannot compute factorial of a negative number. Enter another number: ";
		cin >> number;
	}

	cout << "The factorial of " << number << " is ";
	int accumulator = 1;
	for (; number > 0; accumulator *= number --);
	cout << accumulator << ".\n";

	return 0;
}