#include <stdio.h>

int main() {

    float marks1, marks2, marks3, marks4, marks5;

    printf("Enter the marks of English(out of 100): ");
    scanf("%f", &marks1);
    

    printf("Enter the marks of Maths(out of 100): ");
    scanf("%f", &marks2);

    printf("Enter the marks of Physics(out of 100): ");
    scanf("%f", &marks3);

    printf("Enter the marks of Chemistry(out of 100): ");
    scanf("%f", &marks4);

    printf("Enter the marks of Japanese(out of 100): ");
    scanf("%f", &marks5);

    
    float average, cgpa;

    average = (marks1 + marks2 + marks3 + marks4 + marks5) / 5;

    cgpa = average / 10;

    printf("The CGPA you got: %.2f", cgpa);

    
    return 0;
}