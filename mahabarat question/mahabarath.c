#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX_ANSWER_LENGTH 100
#define NUM_QUESTIONS 10

// Function to check answer
int check_answer(const char *correct_answer, const char *user_answer) {
    return strcmp(correct_answer, user_answer) == 0;
}

// Function to read answers from file
void read_answers_from_file(const char *filename, char answers[NUM_QUESTIONS][MAX_ANSWER_LENGTH]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Failed to open answers file");
        exit(1);
    }
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        if (fgets(answers[i], MAX_ANSWER_LENGTH, file) != NULL) {
            // Remove newline character if present
            answers[i][strcspn(answers[i], "\n")] = '\0';
        }
    }
    fclose(file);
}

int main() {
    char answer[MAX_ANSWER_LENGTH];
    char answers[NUM_QUESTIONS][MAX_ANSWER_LENGTH];
    int question = 0;

    read_answers_from_file("answers.txt", answers);

    while (question < NUM_QUESTIONS) {
        switch (question) {
            case 0:
                printf("Question 1: What was Bhishma's real name?\n");
                break;
            case 1:
                printf("Question 2: Who was the eldest Kaurava after Duryodhana and Dushasana?\n");
                break;
            case 2:
                printf("Question 3: What was the curse on Pandu that prevented him from having children?\n");
                break;
            case 3:
                printf("Question 4: Who was Karna’s teacher?\n");
                break;
            case 4:
                printf("Question 5: What divine weapon did Ashwatthama use to destroy the Pandava lineage?\n");
                break;
            case 5:
                printf("Question 6: Who was the only warrior that had the power to kill Bhishma, Drona, Karna, and Arjuna, but chose not to?\n");
                break;
            case 6:
                printf("Question 7: Which warrior’s death led to the fall of the Kauravas?\n");
                break;
            case 7:
                printf("Question 8: What was the name of Arjuna and Subhadra’s son?\n");
                break;
            case 8:
                printf("Question 9: Who killed Dronacharya during the Kurukshetra war?\n");
                break;
            case 9:
                printf("Question 10: Who could change their gender at will in the Mahabharata?\n");
                break;
        }
        printf("Your answer: ");
        scanf("%s", answer);
        if (check_answer(answers[question], answer)) {
            question++;
        } else {
            printf("Wrong answer! Back to the beginning...\n");
            question = 0;
        }
    }

    printf("Congratulations! You have answered all questions correctly.\n");
    printf("Here is your flag: IEEE{h1_th3r_Pandav6_Pr0:)!}\n");

    return 0;
}
