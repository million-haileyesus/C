#include <stdio.h>

void main() {
	int i, c;
	for(i = 1; (c = getchar()) != '\n';) {
		if(c == ' ') {
			i++;
		}
	}
	printf("%d\n", i);
}
