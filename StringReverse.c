#include <stdio.h>
#include <stdlib.h>
#define WORDLENGTH 50


char* performReverse(char* inputString , char* reverseString);
int stringLength(char* inputString);

int main (void)
{
    char* inputString = malloc(sizeof(char) * WORDLENGTH);
    char* reverseString = malloc(sizeof(char) * WORDLENGTH);
    printf("What string would you like to reverse today?\n");
    scanf("%s" , inputString);
    reverseString = performReverse(inputString , reverseString);
    printf("The string %s reversed is %s\n" , inputString , reverseString);


    free(inputString);
    free(reverseString);
    return 0;
}


char* performReverse(char* inputString, char* reverseString)
{
    int stringCounter = stringLength(inputString);
    *(reverseString + stringCounter) = '\0';
    stringCounter--;
    int counter = 0;
    for(; *(counter + inputString) != '\0'; counter++ , stringCounter--)
    {

        *(reverseString + stringCounter) = *(inputString + counter); 
    }


    return reverseString;
}
int stringLength(char* inputString)
{
    int counter = 0;
    int stringCounter = 0;

    for(; *(counter + inputString) != '\0'; counter++)
    {
        stringCounter++;
    }

    return stringCounter;
}

