#include <stdio.h>

int main() {
    float side, area;

    
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    
    area = side * side;

    
    printf("The area of the square is: %.2f\n", area);

    return 0;
}
