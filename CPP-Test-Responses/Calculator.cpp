#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {

	std::string sUserInput, sTemporary;
	std::vector <std::string> vecsUserInput;
	std::string cOperation;
	double dResult, dNum1, dNum2;
	char cWhiteSpace = ' ';

	std::cout << "Enter calculation (ex. 5 + 6) : ";
	getline(std::cin, sUserInput);
	std::stringstream ss(sUserInput);

	while (getline(ss, sTemporary, cWhiteSpace)) {
		vecsUserInput.push_back(sTemporary);
	}

	dNum1 = std::stod(vecsUserInput[0]);
	dNum2 = std::stod(vecsUserInput[2]);
	cOperation = vecsUserInput[1];

	if (cOperation == "+") {
		printf("%.1f + %.1f equals %.1f", dNum1, dNum2, (dNum1 + dNum2));
	}
	else if (cOperation == "-") {
		printf("%.1f - %.1f equals %.1f", dNum1, dNum2, (dNum1 - dNum2));
	}
	else if (cOperation == "*") {
		printf("%.1f * %.1f equals %.1f", dNum1, dNum2, (dNum1 * dNum2));
	}
	else if (cOperation == "/") {
		printf("%.1f / %.1f equals %.1f", dNum1, dNum2, (dNum1 / dNum2));
	}
	else {
		std::cout << "Please enter only +, -, *, /";
	}

	return 0;
}
