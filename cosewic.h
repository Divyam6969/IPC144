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
   
    
    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
    

    return count;
}

int mainLogic()
{
    printf("=======================================================\nCanada Species at Risk Analysis\n(Data Years: 2010 - 2019)\n=======================================================\n");

    printf("1. View by year (sorted ASCENDING by year)\n2. View by province (sorted DESCENDING by totals)\n3. View by taxon (sorted ASCENDING by totals)\n4. View by province and taxon\n-------------------------------------------------------\n0. Exit");
    printf("\n");
    printf("Selection: ");
    int n;
    scanf("%d",&n);
    
    if(n<0||n>4)
    {
        printf("Invalid menu selection!");
    }
    if(n==0)
    {
        printf("Application terminated!");
        return 0;
    }
}