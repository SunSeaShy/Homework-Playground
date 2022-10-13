#include <iostream>
#include <math.h>
using namespace std;

int flower(int num);

void main() {
	int min, max, tag = 0;
	cin >> min >> max;
	for (int i = min; i <= max; i++) {
		int boolean = flower(i);
		if (boolean) {
			cout << i << " ";
			tag = 1;
		}
	}
	if (tag == 0) {
		cout << "no" << endl;
	}
}

int flower(int num) {
	int a = num / 100;
	int b = (num - a * 100) / 10;
	int c = num - a * 100 - b * 10;
	int d = pow(a, 3) + pow(b, 3) + pow(c, 3);
	if (d == num) {
		return 1;
	}
	return 0;
}