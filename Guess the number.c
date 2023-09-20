#include <stdio.h>

// Function to simulate the guessing game
void guess(int fixedNumber)
{
    int guess, numberOfGuesses = 0;

    printf("Guess a number between 1 and 100\n");

    do {
        
        if (numberOfGuesses > 9) {
            printf("\nYou lose! The correct number was %d\n", fixedNumber);
            break;
        }

        scanf("%d", &guess);

        if (guess > fixedNumber) {
            printf("Lower number please!\n");
            numberOfGuesses++;
        } else if (fixedNumber > guess) {
            printf("Higher number please!\n");
            numberOfGuesses++;
        } else {
            printf("You guessed the number in %d attempts!\n", numberOfGuesses);
        }
      if (numberOfGuesses <1){
          printf("please do not Cheat! the code will soon be updated with libraries to generate random number : )\n");
        }

    } while (guess != fixedNumber);
}

int main()
{
    int fixedNumber = 42; // You can change this to any fixed number you like
    guess(fixedNumber);
    return 0;
}
