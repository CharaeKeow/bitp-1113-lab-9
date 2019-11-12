/* Example 8.2.2 One Dimensional Array 
   Declare an array and ask user to input 10 even numbers
   Then print 2nd and 4th elements, manipulate the 5th, and print them all
*/
#include <iostream>
using namespace std;

int main() {
	int even[10];

	cout << "Please enter 10 even numbers: ";

	for (int i = 0; i < 10; i++) {
		cin >> even[i];
	}

	cout << "\nThe second element is: " << even[1] << endl;
	cout << "\nThe fourth element is: " << even[3] << endl;

	even[4] = even[1] * even[3];

	cout << "\nThe fifth element now is: " << even[4];
	cout << endl;
	cout << "\nThe numbers in array even now are: ";

	for (int i = 0; i < 10; i++) {
		cout << even[i] << " ";
	} 

	cout << endl;

	return 0;
}
