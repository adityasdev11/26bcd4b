

#define TOTAL 5

struct Question {
    char text[100];
    char options[4][40];
    int correct;   /* correct option number (1-4) */
};

int main() {
    struct Question q[TOTAL] = {
        {"Which symbol ends a statement in C?",
         {"." , ";", ":", ","}, 2},
        {"Which function prints output in C?",
         {"scanf()", "input()", "printf()", "cout"}, 3},
        {"Which header file is needed for printf()?",
         {"stdlib.h", "stdio.h", "string.h", "math.h"}, 2},
        {"What is the size of int on most systems (in bytes)?",
         {"1", "2", "4", "8"}, 3},
        {"Which loop runs at least once?",
         {"for", "while", "do-while", "none"}, 3}
    };

    int i, j, answer, score = 0;

    printf("===== C PROGRAMMING QUIZ =====\n");
    printf("Enter the option number (1-4) for each question.\n\n");

    for (i = 0; i < TOTAL; i++) {
        printf("Q%d. %s\n", i + 1, q[i].text);
        for (j = 0; j < 4; j++) {
            printf("   %d) %s\n", j + 1, q[i].options[j]);
        }

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == q[i].correct) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! Correct answer: %d) %s\n\n",
                   q[i].correct, q[i].options[q[i].correct - 1]);
        }
    }

    printf("===== RESULT =====\n");
    printf("Final Score: %d / %d\n", score, TOTAL);
    printf("Percentage : %.2f%%\n", (score * 100.0) / TOTAL);

    if (score == TOTAL)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good job!\n");
    else
        printf("Keep practicing!\n");

    return 0;
}
