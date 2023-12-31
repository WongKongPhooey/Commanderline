/* My C Journey starts here! 26/12/23 (Boxing Day) - JDW */

//Compile this program with gcc Learning.c

#include <stdio.h>

#define MYNAME "Josh Duffety-Wong"

main(){

    char middleInitial = 'E';

    int age = 30;

    long int bigAge = 1934751095;

    float exactAge = 30.523;

    double veryExactAge = 30.52318756938576334;

    char stringDef[10] = "My String";

    //Prints a double line break
    printf("\n\n");

    printf("Up And Running..\n\n");

    printf ("%s is %d years old\n\n", MYNAME, age);

    printf("%s\n\n", stringDef);
}