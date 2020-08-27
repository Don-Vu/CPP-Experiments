#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {

	string sEquation, sHolding, sOperation;
	vector<string> vecsEquation;
	double n1, n2;
	char whitespace = ' ';

	cout << "Enter calculation (5 + 6) : ";
	getline(cin, sEquation);
	stringstream ss(sEquation);

	while (getline(ss, sHolding, whitespace)) {
		vecsEquation.push_back(sHolding);
	}

	n1 = stoi(vecsEquation[0]);
	n2 = stoi(vecsEquation[2]);
	sOperation = vecsEquation[1];

	if (sOperation == "+") {
		printf("%.1f + %.1f = %.1f", n1, n2, (n1 + n2));
	}
	else if (sOperation == "-") {
		printf("%.1f - %.1f = %.1f", n1, n2, (n1 - n2));
	}
	else if (sOperation == "*") {
		printf("%.1f * %.1f = %.1f", n1, n2, (n1 * n2));
	}
	else if (sOperation == "/") {
		printf("%.1f / %.1f = %.1f", n1, n2, (n1 / n2));
	}
	else {
		cout << "Please enter only +, -, *, /";
	}

	return 0;
}
