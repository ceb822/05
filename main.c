#include <stdio.h>

int main(void) {
    int answer = 59;
    int input;
    int trial = 0;

    do {
        
        printf("Guess a number:");
        scanf("%d", &input);

        if (answer < input)
            printf("high!\n");
        else if (answer > input)
            printf("low!\n");

        trial++;
    } while (answer != input);

    printf("Congratulations!\n");

    return 0;
}