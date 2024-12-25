#include "voting.h"
#include <stdio.h>
#include <string.h>

int votes[3] = {0, 0, 0};

void display_candidates(char candidates[3][50])
{
    printf("Candidates:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s", i + 1, candidates[i]);
    }
}

void cast_vote(int choice)
{
    if (choice >= 1 && choice <= 3)
    {
        votes[choice - 1]++;
        printf("Vote recorded!\n");
    }
    else
    {
        printf("Invalid choice. Try again.\n");
    }
}

void display_results(char candidates[3][50])
{
    printf("\nVoting Results:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s: %d votes\n", candidates[i], votes[i]);
    }
}