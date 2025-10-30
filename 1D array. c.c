/*
Name:kevin Ngujo Mwagambo 
REG:CT100/G/26118/25
*/
#include <stdio.h>

int main() {
    float revenue[7];    // 1D array to store daily revenues
    float total = 0, average;
    int i;

    printf("Weekly Revenue Tracker \n");

    // Input revenue for each day
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    // Calculate average daily revenue
    average = total / 7;

    // Display results
    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
    }