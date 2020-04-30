#include <iostream>
#include <string>

int main() {
	std::string sAge;
	std::cout << "Enter Age: ";
	getline(std::cin, sAge);
	int iAge = std::stoi(sAge);

	if (iAge == 5)
		std::cout << "Go to Kindergarten\n";
	else if ((iAge >= 6) && (iAge <= 17))
		printf("Go to grade %d\n", (iAge - 5));
	else if(iAge > 17)
		std::cout << "Go to college\n";
	else
		std::cout << "Too young for school\n";

	return 0;
}
