# include <iostream >

using namespace std;

int main ()
{
	short number ;
	cout << " Enter a number : ";
	cin >> number ;

	//added to check for negative numbers. can also add check for other non-valid inputs such as characters
	while(number < 0){
		cout << "Cannot compute factorial of a negative number. Enter another number: ";
		cin >> number;
	}

	cout << "The factorial of " << number << " is ";
	long long int accumulator = 1;
	for (; number > 0; accumulator *= number --);
	cout << accumulator << ".\n";

	//20 is the highest number that works now that the data type is long long int


	return 0;
}