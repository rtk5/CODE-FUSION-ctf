#include <stdio.h>
#include <string.h>

// Function to check answer
int check_answer(const char *correct_answer, const char *user_answer) {
    return strcmp(correct_answer, user_answer) == 0;
}

int main() {
    char answer[100];
    int question = 0;

    while (question < 10) {
        switch (question) {
            case 0:
                printf("Question 1: What was Bhishma's real name?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Devavrata", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;
            
            case 1:
                printf("Question 2: Who was the eldest Kaurava after Duryodhana and Dushasana?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Vikarna", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;

            case 2:
                printf("Question 3: What was the curse on Pandu that prevented him from having children?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Kindama", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;

            case 3:
                printf("Question 4: Who was Karna’s teacher?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Parashurama", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;

            case 4:
                printf("Question 5: What divine weapon did Ashwatthama use to destroy the Pandava lineage?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Brahmastra", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;

            case 5:
                printf("Question 6: Who was the only warrior that had the power to kill Bhishma, Drona, Karna, and Arjuna, but chose not to?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Barbarika", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;

            case 6:
                printf("Question 7: Which warrior’s death led to the fall of the Kauravas?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Duryodhana", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;

            case 7:
                printf("Question 8: What was the name of Arjuna and Subhadra’s son?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Abhimanyu", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;

            case 8:
                printf("Question 9: Who killed Dronacharya during the Kurukshetra war?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Dhrishtadyumna", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;

            case 9:
                printf("Question 10: Who could change their gender at will in the Mahabharata?\n");
                printf("Your answer: ");
                scanf("%s", answer);
                if (check_answer("Shikhandi", answer)) {
                    question++;
                } else {
                    printf("Wrong answer! Back to the beginning...\n");
                    question = 0;
                }
                break;
        }
    }

    printf("Congratulations! You have answered all questions correctly.\n");
    printf("Here is your flag: IEEE{h1_th3r_Pandav6_Pr0:)!}\n");

    return 0;
}
