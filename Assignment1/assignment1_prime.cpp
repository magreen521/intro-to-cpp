# include <iostream>

using namespace std;

bool prime(int num){
	bool isprime = true;

	//iterate through divisors and set isprime false flag if division yields no remainder and divisor is neither 1 nor itself
	for(int divisor = 1;divisor<num+1;divisor++){
		if(num % divisor == 0 && divisor != 1 && divisor != num){
			isprime = false;
		}
	}

	return isprime;
}

int main(){
	cout << "Enter an integer: ";
	int n;
	cin >> n;

	int divisor;
	int num = 1;
	bool isprime;
	int primes = 0;
	int arr[n];

	while(primes < n){

		isprime = prime(num);

		if(isprime){
			arr[primes] = num;
			primes++;
		}

		//increment num to check the following integer
		num++;
	}

	//print the first N primes
	cout << "\nThe first " << n << " prime numbers are ";
	for(int i = 0;i<n;i++){
		if(i<n-1){
			cout << arr[i] << ", ";
		}
		else{
			cout << "and " << arr[i];
		}
	}
}