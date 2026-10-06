int main(void, char[] filename)
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

char[] filemaker(char[] binaryInterpretation, int heiarchy)
{
    '''
    purpose: takes a line of binary text and an int heiarchy which tells it where to place it in a file, it then opens a file and writes 
             the line of assembly in it
    '''
    //create a file and write down assembly derived from my monkey script language
}


char[] banana(char[] boolLine)
{
    '''
    purpose: given a line of monkey script in which the first token is banana, meaning that its a 
    '''

    return []
}
