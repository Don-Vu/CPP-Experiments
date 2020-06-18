#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> Range(int start, int end, int increment);

int main() {

	vector<int> numbers = Range(1, 11, 2);
	for (auto y : numbers) cout << y << endl;

}

vector<int> Range(int start, int max, int increment) {
	vector<int> numbers;
	int value = start;
	while (value <= max) {
		numbers.push_back(value);
		value += increment;
	}
	return numbers;
}