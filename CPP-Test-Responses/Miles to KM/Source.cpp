#include <iostream>
#include <sstream>

int main() {

	while (1 == 1) {
		// Variables
		std::string strMiles;
		float fMiles, fKiloMeters;

		// Input
		std::cout << "Enter Miles: ";
		getline(std::cin, strMiles);

		// Conversion
		fMiles = std::stod(strMiles);
		fKiloMeters = fMiles * 1.60934;

		// Output
		printf("%.0f miles equals %.2f\n", fMiles, fKiloMeters);
	}

	return 0;
}