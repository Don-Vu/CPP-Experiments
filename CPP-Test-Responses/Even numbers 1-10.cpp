#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main() {

	vector <int> numbers(10);
	numbers[0] = 1;
	iota(begin(numbers), end(numbers), 1);

	for (auto i : numbers) {
		if (i % 2 == 0) {
			cout << i << " is even" << endl;
		}
	}
}