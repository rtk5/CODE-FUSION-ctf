#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ANSWER_LENGTH 100
#define NUM_QUESTIONS 10

// Function to check answer
int check_answer(const char *correct_answer, const char *user_answer) {
    return strcmp(correct_answer, user_answer) == 0;
}

// Function to convert a hex string back to ASCII
void hex_to_string(const char *hex, char *output) {
    while (*hex) {
        sscanf(hex, "%2hhx", output++);
        hex += 2;
    }
    *output = '\0';
}

int main() {
    char answer[MAX_ANSWER_LENGTH];
    char correct_answer[MAX_ANSWER_LENGTH];
    
    // Hex encoded answers
    const char *hex_answers[NUM_QUESTIONS] = {
        "446576617672617461",        // "Devavrata"
        "56696b61726e61",            // "Vikarna"
        "4b696e64616d61",            // "Kindama"
        "5061726173687572616d61",    // "Parashurama"
        "427261686d6173747261",      // "Brahmastra"
        "4b726973686e61",            // "Krishna"
        "447572796f6468616e61",      // "Duryodhana"
        "416268696d616e7975",        // "Abhimanyu"
        "44687269736874616479756d6e61", // "Dhrishtadyumna"
        "5368696b68616e6469"         // "Shikhandi"
    };
    
    // Hex encoded flag
    const char *hex_flag = "464c41472d524149447b68315f746833725f50616e646176365f5072303a29217d"; // "FLAG-RAID{h1_th3r_Pandav6_Pr0:)!}"

    int question = 0;

    while (question < NUM_QUESTIONS) {
        switch (question) {
            case 0:
                printf("Question 1: What was Bhishma's real name?\n");
                break;
            case 1:
                printf("Question 2: Who was the eldest Kaurava after Duryodhana and Dushasana?\n");
                break;
            case 2:
                printf("Question 3: Who cursed Pandu preventing him from birthing children?\n");
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

        // Convert the correct answer from hex to string
        hex_to_string(hex_answers[question], correct_answer);

        if (check_answer(correct_answer, answer)) {
            question++;
        } else {
            printf("Wrong answer! Back to the beginning...\n");
            question = 0;
        }
    }

    // Convert the flag from hex to string
    char flag[MAX_ANSWER_LENGTH];
    hex_to_string(hex_flag, flag);
    
    printf("Congratulations! You have answered all questions correctly.\n");
    printf("Here is your flag: %s\n", flag);

    return 0;
}
