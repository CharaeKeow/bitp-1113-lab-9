/* A program to calculate the distance between two town as per the given distance table.
   Ask user for two towns and then lookup the right index in the 2D array.
   Then print the distance
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int m = 5; //row
const int n = 5; //column

void getInput(int&, int&);
void displayArray(int (&arr)[m][n]);
void getDistance(int, int, int (&arr)[m][n]);

void main() {
	int town1, town2;

	//The distance table array
	int array[m][n] = {
		{258,},
		{43, 301,},
		{475, 217, 518,},
		{876, 616, 918, 401,},
		{623, 365, 667, 148, 246}
	};

	getInput(town1, town2); //ask for user input
	getDistance(town1, town2, array);
	//displayArray(array);
}

void getInput(int& a, int& b) {
	cout << "Enter the value for town1: " << endl;
	cin >> a;
	cout << "Enter the value for town2: " << endl;
	cin >> b;
}

void displayArray(int(&arr)[m][n]) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) {
				cout << endl;
			}
			cout << setw(8) << arr[i][j] << " ";
		}
	}
}

void getDistance(int a, int b, int(&arr)[m][n]) {
	//decrement a to obtain result as in the distance table like in the book
	--a;
	cout << arr[a][b];
}
