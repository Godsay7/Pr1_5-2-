#include <iostream>
#include <string>
using namespace std; 

int main() {
	int A[] = { 25, 7, 11, 4, -3, 6, 0, -5};
	int n = sizeof(A) / sizeof(int);
	int min = A[0];
	int max = A[0];
	int minPos = 0;
	int maxPos = 0;
	for (int i = 1; i < n; i++) {
		if (A[i] < min) {
			min = A[i];
			minPos = i;
		}
	}
	
	for (int i = 1; i < n; i++) {
		if (A[i] > max) {
			max = A[i];
			maxPos = i;
		}
	}

	int Swap = A[minPos];
	A[minPos] = A[maxPos];
	A[maxPos] = Swap;

	for (int i = 0; i < n; i++) {

		cout << A[i] << " " << endl;
	}
	//cout << "Minimum value: " << min << endl;
	//cout << "Maximum vamue: " << max << endl;
	//cout << A << endl;

	return 0;
}