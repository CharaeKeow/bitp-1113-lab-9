/*
A program to read fvie score in array, find the highest and the difference between
  the score from the highest. Print them all
*/

#include <iostream>
using namespace std;

const int SIZE = 5;

void getScore(int(&arr)[SIZE]);
int getLargest(int(&arr)[SIZE]);
void displayArray(int(&arr)[SIZE]);
void getDiffFromHighest(int(&arr)[SIZE], int); //calculate the difference from highest

int main() {
	int array[SIZE];
	cout << "Enter five score: ";
	cout << endl;
	getScore(array);
	
	displayArray(array);
	int largest = getLargest(array);
	cout << "\nThe highest score is " << largest << endl;
	cout << "The score and their differences from the highest are:" << endl;
	getDiffFromHighest(array, largest);

	return 0;
}

void getScore(int(&arr)[SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
	}
}

int getLargest(int(&arr)[SIZE]) {
	int largest = arr[0]; 
	for (int i = 1; i < SIZE; i++) {
		if (largest < arr[i]) {
			largest = arr[i]; 
		}
	}
	return largest;
}

void displayArray(int(&arr)[SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
}

void getDiffFromHighest(int(&arr)[SIZE], int largest) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " off by " << largest - arr[i] << endl;
	}
} 
