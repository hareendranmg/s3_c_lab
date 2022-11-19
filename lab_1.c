// Program to find sum of odd and even numbers, also the absolute difference between them

#include <stdio.h>
#include <stdlib.h>

int main() {
    int upperBound = 0, oddSum = 0, evenSum = 0, absDifference = 0;

    printf("Enter upper bound: ");
    scanf("%d", &upperBound);

    for (int i = 0; i <= upperBound; i++) {
        if (i % 2 == 0) {
            evenSum = evenSum + i;
        } else {
            oddSum = oddSum + i;
        }
    }

    absDifference = abs(oddSum - evenSum);
    
    printf("Odd numbers sum upto %d is %d\n", upperBound, oddSum);
    printf("Even numbers sum upto %d is %d\n", upperBound, evenSum);
    printf("The absolute difference is %d\n", absDifference);

    return 0;
}