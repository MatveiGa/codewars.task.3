#include <iostream>
#include <vector>
#include <cmath>
bool narcissiftic(int value) {
	int a = value;
	std::vector<int> digits;
	for (; value > 0; value /= 10) {
		int a = value % 10;
		digits.push_back(a);
	}
	int result = 0;
	for (int i = 0; i < digits.size(); i++){
		result = result + pow(digits[i],digits.size());

	}
	if (result == a)
		return true;
	else
		return false;
}
int main() {
	narcissiftic(153);

	return 0;
}