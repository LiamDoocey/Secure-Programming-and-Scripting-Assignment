//Int Overflow

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int id; // Declare an integer variable to store the user's ID.
    char idInput[1000]; // Declare a character array to store the user's ID input.
    char name[25]; // Declare a character array to store the user's name input.

    // Prompt the user to enter their name.
    printf("Enter your Name\n--> ");
    fgets(name, sizeof(name), stdin); // Use fgets to read the user's name input.

    // Prompt the user to enter their desired ID.
    printf("Enter your desired ID\n--> ");
    scanf("%s", idInput);

    // Check if the user's ID input is '0'.
    if (idInput[0] == '0') {
        printf("\nAccess Denied, you cannot Select 0 as your ID, this is used by admins.\nPlease Speak with your supervisor\n");
        return 0; 
    }

    // Convert the user's ID input to an integer and store it in the id variable.
    id = atoi(idInput);

    // Print a welcome message with the user's name and ID.
    printf("Welcome %s\nYour ID is %d\n",name ,id);
    
    // Check if the user's ID is 0 (admin).
    if (id == 0) {
        printf("Admin Access Granted\n");

        printf("\nGOVERMENT SECRETS\n--------------------- \n");

        int j = 0;
        int k = 1;

        while (j < 10){
            printf("Secret %i.\n", k);
            j++;
            k++;
        }

    } else {
        printf("Admin Access is Denied\n");
    }

    return 0;
}