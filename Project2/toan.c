#include "toan.h"
int cong(int a, int b) {
	return a + b;
}

int tru(int a, int b) {
	return a - b;
}

int nhan(int a, int b) {
	return a * b;
}

float chia(int a, int b) {
	if (b == 0) {
		return 0; // Trả về 0 nếu chia cho 0
	}
	return (float)a / b;
}