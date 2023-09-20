//Stack Buffer Overflow attack

#include <stdio.h>
#include <string.h>

int main()
{
    //Declares privilege status.
    int privs = 0;

    //Create buffer of 12 Chars to store users name.
    char input[12];

    //Promts User.
    printf("Enter your name to check for clearance.\n --> ");

    //Stores user promt into input Array.
    scanf("%s", input);

    //Checks users privilege.
    //If input is longer than the array of 12 it changes
    //int privs from 0, leaking goverment secrets.
    if (privs != 0)
    {
        printf("\nAccess Granted!\nWelcome %s\n", input);
        printf("\nGOVERMENT SECRETS\n--------------------- \n");

        int j = 0;
        int k = 1;

        while (j < 10){
            printf("Secret %i.\n", k);
            j++;
            k++;
        }
    }

    //Denys access due to the array not being broken out of and privs being 0.
    else {
        printf("Access Denied... User privileges not high enough.\n");
        printf("Try again %s\n", input);
    }

    //Prints out priviliege value.
    printf("\nPrivilege Value = %i\n", privs);

    return 0;
}

