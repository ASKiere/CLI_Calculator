#include <stdio.h>

int main() {
    //calculator :)
    int n1;
    int n2;
    int i;
    int inss;
    /* This is asking the user to input a number, and then it will ask the user to input two more
    numbers. */
    printf("1 = add 2 = subtract 3 = multiply 4 = divide \n");
    scanf_s("%d", &i);
    printf("choose first number: \n");
    scanf_s("%d", &n1);
    printf("next number: \n");
    scanf_s("%d", &n2);
    /* Creating a variable that is equal to the equation. */
    int e = n1 + n2;
    int e2 = n1 - n2;
    int e3 = n1 * n2;
    int e4 = n1 / n2;
    /* Checking if the user input is equal to 1, 2, 3, or 4. If it is, it will print the corresponding
    equation. */
    if (i == 1) {
        printf("%d + %d = %d", n1, n2, e);
    }
    if (i == 2) {
        printf("%d - %d = %d", n1, n2, e2);
    }
    if (i == 3) {
        printf("%d x %d = %d", n1, n2, e3);
    }
    if (i == 4) {
        printf("%d / %d = %d", n1, n2, e4);
    }
    scanf_s("%d", &inss);
}
