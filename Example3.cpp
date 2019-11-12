/* Example 8.2.3 One Dimensional Array
   Generate 6 not so random numbers in an array, then find the largest value
   Print the array and the largest value
*/

#include <iostream>
#include <cstdlib>
using namespace std;

const int n = 6;

int main() {
	int i;
	double largest, randNumbers[n];

	cout << "6 ranodm numbers generated are: " << endl;

	for (int i = 0; i < n; i++) {
		randNumbers[i] = rand();
		cout << randNumbers[i] << " ";
	}

	largest = randNumbers[0];
	
	for (i = 1; i < n; i++) {
		if (largest < randNumbers[i]) {
			largest = randNumbers[i];
		}
	}

	cout << "\nThe largest value = " << largest << endl;

	return 0;
}
