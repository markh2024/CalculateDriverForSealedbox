#include <stdio.h>
#include <math.h>

// Function prototypes
double calculate_vas(double Vb, double Qtc);
double calculate_qts(double Qtc, double Vas, double Vb);

// Example input as a string array
const char *example_input = 
    "As example:\n"
    "Input The following to test:\n"
    "  Enter for Box Volume (Vb): 20 liters.\n"
    "  Enter Desired Qtc: 0.9 (tight but not overly exaggerated bass).\n";

int main() {
    double Vb;     // Box volume (liters)
    double Qtc;    // Desired system Q
    double Vas;    // Calculated Vas (liters)
    double Qts;    // Calculated Qts

    // Print The example input instructions
    printf("%s\n", example_input);

    // Step 1: Prompt for Box Volume
    printf("Enter The box volume (Vb) in liters: ");
    scanf("%lf", &Vb);

    // Step 2: Prompt for Desired System Q
    printf("Enter The desired system Q (Qtc): ");
    scanf("%lf", &Qtc);

    // Step 3: Calculate Vas
    Vas = calculate_vas(Vb, Qtc);

    // Step 4: Calculate Qts
    Qts = calculate_qts(Qtc, Vas, Vb);

    // Output Results
    printf("\nCalculated Driver Parameters:\n");
    printf("  Vas (Driver Compliance Volume): %.2f liters\n", Vas);
    printf("  Qts (Driver Total Q): %.2f\n", Qts);

    return 0;
}

// Function to calculate Vas
double calculate_vas(double Vb, double Qtc) {
    return Vb * (1.0 / (pow(Qtc, 2) - 1.0));
}

// Function to calculate Qts
double calculate_qts(double Qtc, double Vas, double Vb) {
    return Qtc / sqrt(Vas / (Vas + Vb));
}
