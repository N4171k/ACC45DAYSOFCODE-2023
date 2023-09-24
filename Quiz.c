#include <stdio.h>

int main() {
    int score = 0;
    
    printf("Welcome to the Quiz Game!\n");
    printf("Let's test your knowledge. Answer the following questions:\n\n");
    
    // Question 1
    printf("Question 1: What is the capital of France?\n");
    printf("a) London\nb) Berlin\nc) Paris\nd) Madrid\n");
    char answer1;
    scanf(" %c", &answer1);
    if (answer1 == 'c' || answer1 == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is 'c) Paris'.\n");
    }
    
    // Question 2
    printf("\nQuestion 2: Which planet is known as the Red Planet?\n");
    printf("a) Earth\nb) Mars\nc) Venus\nd) Jupiter\n");
    char answer2;
    scanf(" %c", &answer2);
    if (answer2 == 'b' || answer2 == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is 'b) Mars'.\n");
    }
    
    // Display the final score
    printf("\nYour Score: %d out of 2\n", score);
    
    return 0;
}
