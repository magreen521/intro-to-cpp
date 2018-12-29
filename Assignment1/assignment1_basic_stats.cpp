# include <iostream>

using namespace std;

int main(){
	
	//Ask user to choose the number of integers
	cout << "Enter an integer: ";
	int n;
	cin >> n;

	//declare max, min, mean
	int max = 0;
	int min;
	double mean;
	int range;
	double sum = 0;
	int input_index;
	int num;

	for(int i = 0;i<n;i++){
		input_index = i+1;

		cout << "\nEnter integer #" << input_index << ": ";
		cin >> num;

		//find max
		if(num > max){
			max = num;
		}

		//find min
		if(i == 0){
			min = num;
		}
		else if (num < min){
			min = num;
		}

		//sum numbers
		sum += num;
	}

	//calculate range and mean
	range = max - min;
	mean = sum/n;

	//print mean, max, min, and range
	cout << "\nMean: " << mean;
	cout << "\nMax: " << max;
	cout << "\nMin: " << min;
	cout << "\nRange: " << range;
}