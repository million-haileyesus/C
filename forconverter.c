#include <stdio.h>

#define low 0
#define high 320
#define incr 20
void main() {
    for(int i = low; i <= high; i += incr) {
        printf("%4d %6.1f\n", i, (5.0/9) * (i - 32));
    }
}
