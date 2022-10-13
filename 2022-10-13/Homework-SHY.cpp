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
	int res = 0;
	int remainder = 0;
	int temp = num;

	for (int i = 1; i <= 3; i++) {
		remainder = num % 10;
		num = num / 10;
		res += pow(remainder, 3);
	}

	if (res == temp) {
		return 1;
	}
	return 0;
}