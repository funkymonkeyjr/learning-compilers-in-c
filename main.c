#include "interpreter.h"

int FileReader(char[] filename)
{
    '''
    purpose: opens a file with the extension .monkey, then reads each line sending the line to another function depending on 
             the first token it reads,
    '''
    FILE *fptr;
    
    if (filename <=7)
    {
        return
    }
    if (strcmp(filename + strlen(filename) - 7, ".monkey") == 0)
    {
        fptr = fopen(filename, "r");
    }

    char monkeyLine[100]

    while(fgets(monkeyLine, 100, fptr))
    {

    }
}

char[][] lexer(char[] FileLine)
{
    '''
    purpose: take a file line read it break it to each token store in a char[][] then return stored values
    '''
}

char[] parser(char[][] tokens)
{
    '''
    purpose: takes the token of a given line and organizes them in the write heiarchy
    '''
}

char[] filemaker(char[] binaryInterpretation, int heiarchy)
{
    '''
    purpose: takes a line of binary text and an int heiarchy which tells it where to place it in a file, it then opens a file and writes 
             the line of assembly in it
    '''
    //create a file and write down assembly derived from my monkey script language
}

