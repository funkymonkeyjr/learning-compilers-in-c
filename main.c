
#include <stdio.h>   // FILE, fopen, fclose, fgets, sprintf, NULL
#include <string.h>  

int FileReader(char filename[])
{
    /*
    purpose: opens a file with the extension .monkey, then it sends each line to a lexer to be broken into tokens
    */
    FILE *fptr;
    
    if (strlen(filename) <=7 || strcmp(filename + strlen(filename) - 7, ".monkey") != 0)return 1;

    fptr = fopen(filename, "r");

    if (fptr == NULL) return 1;

 
    char monkeyLine[100];


    // might have issues with lines over 99 chars long but whatever for now
    while(fgets(monkeyLine, 100, fptr))
    {
        char tokens[100][100];

        char *p_tokens = &tokens;

        lexer(monkeyLine, tokens);
        //change data type later to binary tree thing
        char binaryTreeThing[] = parser(tokens);
        syntaxTree(binaryTreeThing);
 
    }

    fclose(fptr);

    return 0;
}
 
int lexer(char fileline[], char **p_tokens)
{
    /*
    purpose: take a file line read it break it to each token store in a char[][] then return stored values
    */
 
    int length = strlen(fileline) / sizeof(fileline[0]);
 
    int tokenIndexTracker = 0;
    int wordIndexTracker = 0;
    char wordTracker[100];
    for (int i = 0; i < length; i++)
    {
        //right now lexer only splits at " " but if i want it to split at punctuation later change this
        if (fileline[i] == ' ')
        {
            wordTracker[wordIndexTracker] = '\0';
            strcpy(*p_tokens[tokenIndexTracker], wordTracker);
            tokenIndexTracker++;
            wordIndexTracker = 0;
            wordTracker[0] = '\0';
        }
        else
        {
            wordTracker[wordIndexTracker] = fileline[i];
            wordIndexTracker++;
        }
    }
 
    wordTracker[wordIndexTracker] = '\0';
    strcpy(*p_tokens[tokenIndexTracker], wordTracker);
 
    return 1;
 
    
}
 
int parser(char tokens[100][100])
{
    //for now im using char[] as the return but it should return a binary tree like variable
    /*
    purpose: takes the token of a given line and organizes them in the right heiarchy
    */
 
 
}
 
int syntaxTree(char binaryTreeThing[100])
{
    //for now it takes a char[] but it should take a binary tree like variable
    /*
    purpose: take a parsed line then examine it to find which function in the interpreter to give it too
    */
}
 
int filemaker(char assemblyInterpretation[], int heiarchy, char originalFileName[])
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