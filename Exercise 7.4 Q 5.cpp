#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.142

void main() {
	double j = 1.5, circle;
	circle = PI * pow(j, 2);

	cout << "\n\nThe area of this circle is " << circle << "\n\n";

	//Exercise 7.4 Question 5
	double a = 9.5, b = 8.5, c = 6;
	
	cout << "abs(9.5) = " << abs(a) << endl;
	cout << "floor(9.5) = " << floor(a) << endl;
	cout << "floor(-9.5) = " << floor(-a) << endl;
	cout << "ceil(8.5) = " << ceil(b) << endl;
	cout << "ceil(-8.5) = " << ceil(-b) << endl;
	cout << "sqrt(pow(6,4)) = " << sqrt(pow(6, 4)) << endl;

	//Extra
	int ans(10);
	int bns{ 10 };

	cout << ans << "\n" << bns;
}
