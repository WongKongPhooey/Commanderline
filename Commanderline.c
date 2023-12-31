/* My C Journey starts here! 26/12/23 (Boxing Day) - JDW */

#include <stdio.h>

#define AUTHOR "Josh Duffety-Wong"

main(){

    char middleInitial = 'E';

    int age;

    long int bigAge = 1934751095;

    float exactAge = 30.523;

    double veryExactAge = 30.52318756938576334;

    char stringDef[10] = "My String";

    //Prints a double line break
    printf("\n\n");

    printf("Terminal Connected..\n\n");

    printf("Greetings Commander, this is GCC HQ.\n\n");

    printf("Please state the passphrase to continue.\n\n");

    scanf("%s", &stringDef);

    printf("\n%s is correct. We are ready to officiate the signing over of your deeds to the island.\n\n", &stringDef);

    printf("\nThese will all be straightforward. Your age is?\n\n");

    scanf("%d", &age);

    if(age > 13 && age < 120){
        printf("\n%d. And you identify as?\n\n", age);
    } else {
        printf("\n%d? That can't be right?\n\n", age);
    }
}