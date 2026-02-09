#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5, sum;
    float per;

    printf("Enter marks of 5 subjects: ");
    // ye mam ne bataya  %d for integers and & to point to the variable address
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    sum = s1 + s2 + s3 + s4 + s5;
    per = sum / 5.0; //  maine Use  kiya 5.0 to ensure that result is a float (decimal)

    printf("Sum: %d\n", sum);
    printf("Percentage: %.2f%%", per);

    return 0;
}