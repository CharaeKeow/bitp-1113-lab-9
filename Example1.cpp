// Example 8.2.1 One Dimensional Array 
// Declare an array and use for loop to find and print its average


#include <iostream>
using namespace std;

const int SIZE = 10;

int main() {
	int numbers[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };
	int total = 0, average;

	for (int i = 0; i < SIZE; i++) {
		total += numbers[i];
	}

	average = total/SIZE;

	cout << "The average value of elements in array numbers is: " << average << endl;

	return 0;
}
