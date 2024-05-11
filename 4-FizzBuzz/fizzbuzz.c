#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        // printf("%i", i);
        if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else {
            printf("%i\n", i);
        }
    }
}