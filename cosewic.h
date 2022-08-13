struct FileData
{
    int year;
    int extinct;
    int extirpated;
    int endangered;
    int threatened;
    int concern;
    int total;
};

int loadData(char* s,FILE *fp,int max)
{
    int count = 0;  // Line counter (result)
    char c;  // To store a character read from file
    // Open the file
    
 
    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
    

    return count;
}