#include <stdio.h>

void main() {
	int i;
	int n = n;
	for(i = 0; n != 0; n >>= 1) {
		if(n & 01) {
			i++;
		}
	}
	printf("%d\n", i);
}
