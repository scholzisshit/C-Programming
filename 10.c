#include <stdio.h>

const char* division_from_avg(double avg) {
    if (avg > 60) return "1st Division";
    else if (avg >= 50 && avg <= 60) return "2nd Division";
    else if (avg >= 40 && avg < 50) return "3rd Division";
    else return "Fail";
}

int main() {
    double m[5], total = 0.0;
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%lf", &m[i]);
        total += m[i];
    }
    double avg = total / 5.0;
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", avg);
    printf("Division: %s\n", division_from_avg(avg));
    return 0;
}