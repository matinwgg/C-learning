#include <stdio.h>
#include <ctype.h>
#include <string.h>

int add(float x, float y) {
    float sum = x + y;

    printf("Sum of %.2f and %.2f: %.2f\n", x, y, sum);

    return 0;
 }

 int compare(int x, int y) {
    if (x > y) {
        printf("%i is greater than %i.", x, y);
    }
    else if (x < y) {
        printf("%i is lesser than than %i.", x, y);
    }
    else {
        printf("%i is equal to %i.", x, y);
    }
    return 0;
 }

 void agree() {
    char c;

    printf("Do you agree? (y/n) "); scanf("%c", &c);

    if (isalpha(c)) {
        c = tolower(c);
        if (c == 'y') {
            printf("Yes, I agree.\n");
        }
        else if (c == 'n') {
            printf("No, I don't.\n");
        }
        else {
            printf("Invalid Input. Please try again.\n");

        }
    } 
    else {
        printf("\nInvalid Input. Please try again.\n");
        agree();
}
 }

 void meow() {
    int i = 3;
    while (i > 0) {
        printf("Meow!\n");
        i--;
    }
 }

int getSize() {
    int n;

    // Get size of grid
    do {
        printf("Size: "); scanf("%i", &n);
    } 
    while(n < 1);

    return n;
}

void print_grid(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {   
            printf("#");
        }
        printf("\n");
    } 
}

 void mario() {
    
    // Get size of the grid
    int n = getSize();
    
    // Build grid of bricks
    print_grid(n);
    
 }


int main(void) {
    // int x, y;

    // printf("X: "); scanf("%i", &x);

    // printf("Y: "); scanf("%i", &y);

    //agree();
    //meow();
    mario();

   //add(x, y);

   return 0;
}
