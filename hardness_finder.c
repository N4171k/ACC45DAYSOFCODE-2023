#include <stdio.h>

int main() {
    double caConcentration, mgConcentration;

    // Input calcium and magnesium concentrations in mg/L
    printf("Enter calcium concentration (mg/L): ");
    scanf("%lf", &caConcentration);

    printf("Enter magnesium concentration (mg/L): ");
    scanf("%lf", &mgConcentration);

    // Calculate water hardness in mg/L (ppm)
    double hardness = (caConcentration + (mgConcentration * 1.7)) * 50;

    printf("Water hardness: %.2f mg/L (ppm)\n", hardness);

    return 0;
}
