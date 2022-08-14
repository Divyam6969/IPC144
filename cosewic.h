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
    else if (n==1)
    {
        printf("YEAR EXTINCT EXTIRPATED ENDANGERED THREATENED CONCERN     TOTAL\n---- ------- ---------- ---------- ---------- ------- ---------\n2010    3291       3304       3101       3090    3194     15980\n2011    3151       3083       3238       3248    3066     15786\n2012    3298       3385       3339       3385    3395     16802\n2013    3273       3200       3337       3291    3318     16419\n2014    3420       3490       3494       3492    3323     17219\n2015    3433       3378       3179       3198    3289     16477\n2016    3293       3269       3445       3447    3177     16631\n2017    3314       3365       3331       3289    3314     16613\n2018    3276       3282       3274       3287    3296     16415\n2019    3380       3375       3402       3395    3331     16883  \n------- ---------- ---------- ---------- ------- ---------\n33129      33131      33140      33122   32703    165225");
    }
    else if(n==2)
    {
        printf("PROVINCE             EXTINCT EXTIRPATED ENDANGERED THREATENED CONCERN     TOTAL\n-------------------- ------- ---------- ---------- ---------- ------- ---------\nOntario                 2629       2631       2614       2690    2756     13320\nNunavut                 2633       2717       2684       2555    2591     13180\nManitoba                2701       2666       2684       2548    2563     13162\nYukon Territory         2619       2648       2675       2608    2490     13040\nNew Brunswick           2636       2562       2608       2671    2418     12895\nQuebec                  2666       2340       2668       2361    2784     12819\nSaskatchewan            2562       2571       2550       2671    2340     12694\nNova Scotia             2563       2278       2541       2634    2602     12618\nNewfoundland            2383       2619       2395       2695    2501     12593\nAlberta                 2520       2629       2614       2320    2442     12525\nPrince Edward Island    2559       2384       2557       2520    2384     12404\nBritish Columbia        2323       2559       2263       2317    2585     12047\nNorthwest Territory     2335       2527       2287       2532    2247     11928\n-------------------- ------- ---------- ---------- ---------- ------- ---------\n                   33129      33131      33140      33122   32703    165225");
    }
    else if(n==3)
    {
        printf("TAXON           EXTINCT EXTIRPATED ENDANGERED THREATENED CONCERN     TOTAL\n--------------- ------- ---------- ---------- ---------- ------- ---------\nMolluscs           3096       3329       3194       3151    3061     15831\nLichens            3194       3267       3128       3007    3320     15916\nAmphibians         3186       3446       3096       3239    3305     16272\nVascular Plants    3435       3203       3344       3238    3211     16431\nReptiles           3142       2989       3626       3547    3146     16450\nMammals            3333       3351       3186       3421    3203     16494\nArthropods         3626       3407       3256       3310    3176     16775\nMosses             3256       3313       3448       3547    3354     16918\nBirds              3434       3268       3427       3317    3478     16924\nFishes             3427       3558       3435       3345    3449     17214\n                ------- ---------- ---------- ---------- ------- ---------\n                  33129      33131      33140      33122   32703    165225");
    }
    
}