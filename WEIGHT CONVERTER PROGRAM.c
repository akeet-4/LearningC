#include <stdio.h>

int main() {

    // WEIGHT CONVERTER PROGRAM

    int choice = 0;
    float pound = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Pound to Kilogram\n");
    printf("2. Kilogram to Pounds\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) {
        // Pound to Kilogram
        printf("Enter the weight in Pound: ");
        scanf("%f", &pound);
        kilograms = pound/2.20462;
        printf("%.2f Pounds is equal to %.2f Kilograms.\n", pound, kilograms);
    }
    else if(choice == 2) {
        // Kilogram to Pound
        printf("Enter the weight in Kilogram: ");
        scanf("%f", &kilograms);
        pound = kilograms * 2.20462;
        printf("%.2f Kilograms is equal to %.2f Pounds.\n", kilograms, pound);
    }
    else{
    printf("Invalid choice! Please enter 1 or 2\n");
    }

    return 0;
}
