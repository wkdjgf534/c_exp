#include <stdio.h>

int main(int argc, char *argv[]) {
    float temp;
    char unit;

    printf("Enter temp and unit (25.0 C)");

    scanf("%f %c", &temp, &unit);
    if (unit == 'C' || unit == 'c') {
        printf("%.2fC is ", temp);
        temp = temp * (9.5 / 5.0) + 32.0;
        printf("%.2fF\n", temp);
    } else if ( unit == 'F' || unit == 'f') {
        printf("%.2fF is ", temp);
        temp = (temp - 32.0) /  (9.5 / 5.0);
        printf("%.2fC\n", temp);
    } else {
        printf("Unknown temperature unit. Use C or F\n");
    }

    return 0;
}