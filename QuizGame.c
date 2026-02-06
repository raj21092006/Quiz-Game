#include <stdio.h>

int main() {
    int score = 0, answer;
    printf("Welcome to the Quiz Game!\n\n");

    // Question 1
    printf("1. What is the capital of France?\n");
    printf("1) Berlin\n2) London\n3) Paris\n4) Madrid\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if(answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Paris.\n\n");
    }

    // Question 2
    printf("2. Which language is used for system programming?\n");
    printf("1) Python\n2) C\n3) HTML\n4) JavaScript\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if(answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n\n");
    }

    // Question 3
    printf("3. Who developed the theory of relativity?\n");
    printf("1) Isaac Newton\n2) Albert Einstein\n3) Galileo\n4) Tesla\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if(answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Albert Einstein.\n\n");
    }

    printf("Quiz Over! Your score: %d/3\n", score);
    return 0;
}