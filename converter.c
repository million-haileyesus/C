#include <stdio.h>

int main() {
	int low = 0;
	int high = 300;
	float fahr = low;
	float cel;

	while(fahr <= high) {
		cel = (5.0/9) * (fahr - 32);
		printf("%4.0f %6.1f\n", fahr, cel);
		fahr += 20;
	}
	return 0;
}
