#include <stdio.h>

// Length conversion functions
float meters_to_feet(float meters) {
    float feet = meters * 3.28084;
    return feet;
}

float feet_to_meters(float feet) {
    float meters = feet / 3.28084;
    return meters;
}

// Weight conversion functions
float kilograms_to_pounds(float kilograms) {
    float pounds = kilograms * 2.20462;
    return pounds;
}

float pounds_to_kilograms(float pounds) {
    float kilograms = pounds / 2.20462;
    return kilograms;
}

// Volume conversion functions
float liters_to_gallons(float liters) {
    float gallons = liters * 0.264172;
    return gallons;
}

float gallons_to_liters(float gallons) {
    float liters = gallons / 0.264172;
    return liters;
}

// Temperature conversion functions
float celsius_to_fahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}

float fahrenheit_to_celsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}

void displayMenu() {
    printf("\nUnit Conversion Program\n");
    printf("=======================\n");
    printf("1. Length\n");
    printf("2. Weight\n");
    printf("3. Volume\n");
    printf("4. Temperature\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
}

void convertLength() {
    float value, result;
    int choice;

    printf("\nLength Conversion\n");
    printf("=================\n");
    printf("1. Meters to Feet\n");
    printf("2. Feet to Meters\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    if (choice == 1) {
        result = meters_to_feet(value);
        printf("%.2f meters is equal to %.2f feet.\n", value, result);
    } else if (choice == 2) {
        result = feet_to_meters(value);
        printf("%.2f feet is equal to %.2f meters.\n", value, result);
    } else {
        printf("Invalid choice.\n");
    }
}

void convertWeight() {
    float value, result;
    int choice;

    printf("\nWeight Conversion\n");
    printf("=================\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    if (choice == 1) {
        result = kilograms_to_pounds(value);
        printf("%.2f kilograms is equal to %.2f pounds.\n", value, result);
    } else if (choice == 2) {
        result = pounds_to_kilograms(value);
        printf("%.2f pounds is equal to %.2f kilograms.\n", value, result);
    } else {
        printf("Invalid choice.\n");
    }
}

void convertVolume() {
    float value, result;
    int choice;

    printf("\nVolume Conversion\n");
    printf("=================\n");
    printf("1. Liters to Gallons\n");
    printf("2. Gallons to Liters\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    if (choice == 1) {
        result = liters_to_gallons(value);
        printf("%.2f liters is equal to %.2f gallons.\n", value, result);
    } else if (choice == 2) {
        result = gallons_to_liters(value);
        printf("%.2f gallons is equal to %.2f liters.\n", value, result);
    } else {
        printf("Invalid choice.\n");
    }
}

void convertTemperature() {
    float value, result;
    int choice;

    printf("\nTemperature Conversion\n");
    printf("======================\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    if (choice == 1) {
        result = celsius_to_fahrenheit(value);
        printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", value, result);
    } else if (choice == 2) {
        result = fahrenheit_to_celsius(value);
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", value, result);
    } else {
        printf("Invalid choice.\n");
    }
}

int main() {
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertLength();
                break;

            case 2:
                convertWeight();
                break;

            case 3:
                convertVolume();
                break;

            case 4:
                convertTemperature();
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please select a number between 1 and 5.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

