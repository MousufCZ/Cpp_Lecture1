#include <iostream>

using namespace std;

int square(int n) {
	return n * n;
}

int factorial(int n) {
	int prod = 1;
	for (int i = 1; i <= n; ++i)
		prod *= i;
	return prod;
}

int main(){

	//int x = square(x);
	//int y = factorial(7);
	//cout << "Hello World!\n";
	int x;
	cout << "Enter a number: ";
	cin >> x;
	cout << "x is " << x << '\n';
	cout << "x sq us " << square(x) << '\n';
	return 0;
}