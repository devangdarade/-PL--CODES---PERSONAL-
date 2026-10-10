#include <stdio.h>

int main() {
    int attended, total;
    float percentage;

    printf("Enter attended and total lectures: ");
    scanf("%d %d", &attended, &total);

    if (total > 0) {
        percentage = attended * 100.0f / total;
        printf("Attendance = %.2f%%\n", percentage);
    } else {
        printf("Invalid total lectures\n");
    }

    return 0;
}