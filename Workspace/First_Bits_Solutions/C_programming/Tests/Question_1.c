
#include <stdio.h>

int main() {
    int start, end;
    int i, j, isPrime, sum = 0;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++) {
        if(i <= 1)
            continue;

        isPrime = 1;

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            sum = sum + i;
        }
    }

    printf("Sum of prime numbers = %d", sum);

    return 0;
}