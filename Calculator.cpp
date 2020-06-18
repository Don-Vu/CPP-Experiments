#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double g_dInput1, g_dInput2;		// Global variables

class Calculator {					// Calculator functions
private:
	double dNum1, dNum2;
	int iNum1, iNum2;
public:
	Calculator(double a, double b) {
		dNum1 = a;
		dNum2 = b;
		iNum1 = round(a);
		iNum2 = round(b);
	}
	double Add() {
		return dNum1 + dNum2;
	}
	double Sub() {
		return dNum1 - dNum2;
	}
	double Mult() {
		return dNum1 * dNum2;
	}
	double Div() {
		return dNum1 / dNum2;
	}
	int Mod() {
		return iNum1 % iNum2;
	}
	void Calculate(int x) {
		switch (x) {
		case 1:
			printf("The sum is %.0f\n\n", Add());
			break;
		case 2:
			printf("The sum is %.0f\n\n", Sub());
			break;
		case 3:
			printf("The product is %.0f\n\n", Mult());
			break;
		case 4:
			printf("The quotient is %.0f\n\n", Div());
			break;
		case 5:
			printf("The remainder is %d\n\n", Mod());
			break;
		default:
			break;
		}

	}
};

int main() {
	while (true) {

		int Choice;
		string strContinue;

		cout << "Enter the first number: ";		// User number input
		cin >> g_dInput1;
		cout << "Enter the second number: ";
		cin >> g_dInput2;

		Calculator Function(g_dInput1, g_dInput2);		// Sends inputs to Calculator class

		cout << "Add (1), subtract (2), multiply (3), divide (4), or modulus (5): ";		// User function selection

		while (true) {								// Checks for input domain (1-5) and calls corresponding function
			cin >> Choice;
			if (Choice >= 1 && Choice <= 5) {
				Function.Calculate(Choice);
				cin.ignore();
				break;
			}
			else {
				cout << "Please try again\n";
			}
		}
		cout << "Would you like to continue?\n";					// Restart prompt

		while (true) {									// Checks for valid responses
			getline(cin, strContinue);
			if (strContinue == "Yes" || strContinue == "yes") {
				cout << endl;
				break;
			}
			else if (strContinue == "No" || strContinue == "no") {
				cout << "Later!\n";
				return 0;
			}
			else {
				cout << "Please try again\n";
			}
		}
	}
}