/* Take a number from the user and calculate its cube (num*num*num)*/

#include <stdio.h>
int main() {
    int num, cube;

    // Prompt the user for input
    printf("Enter an Number: ");
    scanf("%d", &num);

    // Calculate the cube
    cube = num * num * num;

    // Display the result
    printf("The cube of %d is %d\n", num, cube);

    return 0;
}
