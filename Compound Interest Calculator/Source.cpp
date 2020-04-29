#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double Amount, Principle, Interest;
	int Days;

	cout << "Enter initial investment: ";
	cin >> Principle;
	cout << "Enter interest (%): ";
	cin >> Interest;
	Interest /= 100;
	cout << "Enter amount of days: ";
	cin >> Days;

	for (int i = 1; i <= Days; i++) {
		Amount = Principle * pow((1 + Interest), i);
		printf("Day %i: %.2f\n", i, Amount);
	}
}