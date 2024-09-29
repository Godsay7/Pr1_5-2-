#include <iostream>

int main() {
	int A[] = { 4, 6, 1, 9, -24, 11, 0, 8, 5, -7 };
	int n = sizeof(A) / sizeof(int);
	int min = A[0];
	for (int i = 1; i < n; i++) {
		if (A[i] >= 0 && A[i] < min) {
		min = A[i]; 
		}
	}  std::cout << "The smallest value among positive elements: " << min;
	return 0;
}