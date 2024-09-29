#include <iostream>

int main() {
	int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(A) / sizeof(int); //10
	int P;
	std::cout << "Add number P: ";
	std::cin >> P;
	int indfo = 0;
	if (P >= 0 && P <= n) {
		for (int i = 0; n > i; i++) {
		    if(P == A[i]) {
				//A[i]  A[0]=1 A[1]=2
				std::cout << "Index of the first occurrence: " << i;
		    }
	    }
	} else if (P < 0 || P > n) {
		std::cout << "Error";
	}
	return 0;
}