#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

void CreateTree(int height);

int main() {
	int height;
	cout << "How tall is the tree: ";
	cin >> height;

	CreateTree(height);
}

void CreateTree(int height) {
	int hashes = 1, spaces = height - 1;

	while (spaces > -1) {
		for (int i = 0; i < spaces; i++) {
			cout << " ";
		}
		for (int i = 0; i < hashes; i++) {
			cout << "#";
		}

		cout << endl;
		hashes += 2;
		spaces--;
	}
	for (int i = 0; i < (height - 1); i++) {
		cout << " ";
	}
	for (int i = 0; i < 1; i++) {
		cout << "#";
	}

}