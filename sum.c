#include <stdio.h>
int sum(int);
int main() {
    int n;
    printf("Enter the number of elements you want to add:\n");
    scanf("%d", &n);
    printf("Sum of the elements: %d\n", sum(n));
}


int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

