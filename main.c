// IPC144 2022 Summer Final Assessment Coding Project
// --------------------------------------------------
// Project idea is based on COSEWIC reports for SAR
//
//      COSEWIC: Committee on the Status of Endangered Wildlife in Canada
//      SAR:     Species At Risk
//
// Source: https://bit.ly/3AEgab9
//
// Note: The data used for this assignment has been fictionalized with invalid counts

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "cosewic.h"
#define DATA_FILE "data.txt"
#define MAX_RECORDS 6500

int main(void)
{
    int records;
    // struct FileData data[MAX_RECORDS] = {{0}};

    printf("Loading data from file: %s\n", DATA_FILE);

    FILE* data;
    data = fopen("data.txt", "r");
    records = loadData(DATA_FILE, data, MAX_RECORDS);
    printf("%d data records read from file...\n\n", records);

    // if (records > 0)
    // {
    //     // Entry point to application logic
    //     mainLogic(data, records);
    // }
    // else
    // {
    //     printf("Ooooops there seems to have been an error loading data!\n");
    // }

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
    
    return 0;
}