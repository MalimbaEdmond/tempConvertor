#include <stdio.h>

float convertTemperature(int chosenOption, float celsiusArray[], int arraySize) {

    for (int i = 0; i < arraySize; i++) {
        if (chosenOption == 1) {
            float fahrenheit = (celsiusArray[i] * 9.0 / 5.0) + 32.0;
            printf("Fahrenheit for temperature %d: %.2f\n", i + 1, fahrenheit);
        } else if (chosenOption == 2) {
            float celsius = (celsiusArray[i] - 32.0) * 5.0 / 9.0;
            printf("Celsius for temperature %d: %.2f\n", i + 1, celsius);
        } else {
            fprintf(stderr, "Invalid option. Please choose 1 for C->F or 2 for F->C.\n");
            return -1; 
        }
    }

    return 0;
}

int main() {
    printf("Let's convert your temperatures!\n\n");

    int numOfTemp;
    int chosenOption;

    printf("How many temperatures do you want to convert? ");
    scanf("%d", &numOfTemp);
    scanf("%*[^\n]"); 

    if (numOfTemp <= 0) {
        fprintf(stderr, "Error: Please enter a positive number of temperatures.\n");
        return 1;
    }

    float celsiusArray[numOfTemp];

    printf("Enter your temperatures in Celsius:\n");
    for (int i = 0; i < numOfTemp; i++) {
        printf("Temperature %d: ", i + 1);
        scanf("%f", &celsiusArray[i]);
        scanf("%*[^\n]");
    }

    printf("\nChoose your conversion type:\n");
    printf("1. Celsius to Fahrenheit (C->F)\n");
    printf("2. Fahrenheit to Celsius (F->C)\n");
    scanf("%d", &chosenOption);
    scanf("%*[^\n]"); 
    if (convertTemperature(chosenOption, celsiusArray, numOfTemp) == -1) {
        fprintf(stderr, "Conversion failed due to invalid option.\n");
        return 1;
    }

    printf("\nConversion complete!\n");

    return 0;
}
 