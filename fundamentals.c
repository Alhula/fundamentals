// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
// Declare Macros
#define BUFFER_SIZE     80
#define NUM_INPUT_SIZE  10
// Include the header file
#include "fundamentals.h"

// Entry point for the fundamentals module
void fundamentals(void) {
    /* Version 1 */
    // Start of the indexing strings demo
    printf("*** Start of Indexing Strings Demo ***\n");
    // Declare Variables with meaningful names and sizes
    char userInputBuffer[BUFFER_SIZE];   // Buffer to store user input
    char positionInput[NUM_INPUT_SIZE];  // Array to store user's position input
    size_t position;  // Variable to store the position within the string

    // Use a do-while loop to interact with the user until they choose to quit
    do {
        // Prompt the user to input a non-empty string
        printf("Enter a non-empty string (q - to quit): \n");
        fgets(userInputBuffer, BUFFER_SIZE, stdin);
        userInputBuffer[strlen(userInputBuffer) - 1] = '\0';  // Remove the newline character

        // Check if the user entered "q" to quit
        if (strcmp(userInputBuffer, "q") != 0) {
            // Prompt the user to input a position within the string
            printf("Enter the character position within the string: \n");
            fgets(positionInput, NUM_INPUT_SIZE, stdin);
            positionInput[strlen(positionInput) - 1] = '\0';  // Remove the newline character
            position = atoi(positionInput);  // Convert position input to an integer

            // Check if the position input is valid, adjust if necessary
            if (position >= strlen(userInputBuffer)) {
                position = strlen(userInputBuffer) - 1;
                printf("Position too big, reduced to max available.\n");
            }

            // Print the character found at the specified position within the string
            printf("Character at position %d is '%c'\n", (int)position, userInputBuffer[position]);
        }
    } while (strcmp(userInputBuffer, "q") != 0);

    // Display a message to indicate the end of the indexing strings demo
    printf("*** End of Indexing Strings Demo ***\n\n");

    /* Version 2 */

        printf("*** Start of Measuring Strings Demo ***\n");
    //Title showing the start of measuring strings
        char buffer2[80];     
    //Declaring a character type array named "buffer2" with a capacity of 79 characters, including an additional space for the null character.
    do{
        printf("Type a string (q - to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);
        //fgets funcation to input from the user and store it in array and control overflow "buffer2"
        buffer2 [strlen(buffer2) - 1] = '\0';
        if(strcat(buffer2, "q") != 0){
            printf("The length of '%s' is %zu characters\n", buffer2, strlen(buffer2));
        }
        //The function "strlen" is used to display the length of the input on the screen..
    } while (strcmp(buffer2, "q") != 0);
    // while loop will continue executing until the value of buffer2 is equal to "q". If "q" is entered, the program will terminate.
    printf("*** End of Measuring Strings Demo ***\n\n");
    //Statement printed if q is entered.

    }

