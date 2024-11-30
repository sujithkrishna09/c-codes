#include <stdio.h>

float Average(int marks[]);

int main() {
    int marks[5] = {99, 90, 96, 93, 95};
    printf("Average marks = %.1f", findAverage(marks));
    return 0;
}

float Average(int marks[]) {
    int i;
    float sum = 0;
    for (i = 0; i < 5; i++) {
        sum += marks[i];
    }
    return sum / 5;
}
