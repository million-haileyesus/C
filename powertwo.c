#include <stdio.h>

int power(int b) {
	int result = 1;
	for(int i = 0; i < b; i++) {
		result <<= 1;
	}
	return result;
}

void main() {
	for(int i = 0; i < 11; i++) {
		printf("%d -- %d\n", i, power(i));
	}
}
