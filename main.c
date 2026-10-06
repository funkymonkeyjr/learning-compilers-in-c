#include "interpreter.h"
 
int FileReader(char filename[])
{
    /*
    purpose: opens a file with the extension .monkey, then it sends each line to a lexer to be broken into tokens
    */
    FILE *fptr;
    
    if (strlen(filename) <=7)
    {
        return -1;
    }
    if (strcmp(filename + strlen(filename) - 7, ".monkey") == 0)
    {
        fptr = fopen(filename, "r");
    }
 
    char monkeyLine[100];
 
    while(fgets(monkeyLine, 100, fptr))
    {
        char tokens[100][100] = lexer(monkeyLine);
        //change data type later to binary tree thing
        char binaryTreeThing[] = parser(tokens);
        syntaxTree(binaryTreeThing);
 
    }

    fclose(fptr)
}
 
char[][] lexer(char fileLine[])
{
    /*
    purpose: take a file line read it break it to each token store in a char[][] then return stored values
    */
 
    int length = strlen(fileLine) / sizeof(fileLine[0])
 
    char wordTracker[100];
    char tokens[100][100];
    int tokenIndexTracker = 0;
    int wordIndexTracker = 0;
    for (int i = 0; i < length; i++)
    {
        if (fileLine[i] == ' ')
        {
            wordTracker[wordIndexTracker] = '\0';
            strcpy(tokens[tokenIndexTracker], wordTracker);
            tokenIndexTracker++;
            wordIndexTracker = 0;
            wordTracker[0] = '\0';
        }
        else
        {
            wordTracker[wordIndexTracker] = fileLine[i];
            wordIndexTracker++;
        }
    }
 
    wordTracker[wordIndexTracker] = '\0';
    strcpy(tokens[tokenIndexTracker], wordTracker);
 
    return tokens;
 
    
}
 
char[] parser(char tokens[][])
{
    //for now im using char[] as the return but it should return a binary tree like variable
    /*
    purpose: takes the token of a given line and organizes them in the right heiarchy
    */
 
 
}
 
char[] syntaxTree(char[] binaryTreeThing)
{
    //for now it takes a char[] but it should take a binary tree like variable
    /*
    purpose: take a parsed line then examine it to find which function in the interpreter to give it too
    */
}
 
char[] filemaker(char assemblyInterpretation[], int heiarchy, char originalFileName[])
{
    /*
    purpose: takes a line of binary text and an int heiarchy which tells it where to place it in a file, it then opens a file and writes 
             the line of assembly in it
    */
 
    FILE *fptr;
 
    char outputFileName[100];
 
    sprintf(outputFileName, "%s.asm", originalFileName);
 
    fptr = fopen(outputFileName, "a");
 
    //after this use the hiearchy and fseek to place the text in the write spot in the file then write the assemblyInterpretation to it
 
    fclose(fptr);
}