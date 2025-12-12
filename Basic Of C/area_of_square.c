/* Write a program to calculate the area of a square */

// area of a square = side * side

#include <stdio.h>

//area of square function

int main() {
    int side, area;   // int or float can be used for side and area

    // Input: length of the side of the square
    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);

    // Calculate area
    area = side * side;

    // Output: area of the square
    printf("The area of the square is: %d\n", area);

    return 0;
}