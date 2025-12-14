/* Write a program to calculate the perimeter of a rectangle . Take side , a and b , from the user */

// perimeter of rectangle = 2 * (a + b)

#include <stdio.h>

int main() {
    float a , b, perimeter;
    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    perimeter = 2 * (a + b);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
    return 0;
    
}